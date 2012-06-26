
/* Program generated by Cbasic 4.3.0.0.13660 */
#define XSCT_CBASIC

#define C_TRANSLATOR_4_1
#define XENABLE_VERSION_CHECK

#include "scttypes.h"
#include "U2ExtraOps.h"
#ifdef XUSE_SIGNAL_NUMBERS
#include "Main.hs"
#endif
#ifdef XCTRACE
static char  xFileName[] = "U2ExtraOps.c";
#endif


/*************************************************************************
**                  #CODE directives, #BODY sections                    **
*************************************************************************/
                /* #SDTREF(TEXT,"C:\\Program Files (x86)\\IBM\\Rational\\TAU\\4.3\\addins\\sdlkernels\\ADT\\u2ExtraOps.pr",766,1) */



#ifdef XSCT_CMICRO

SDL_Integer z_U2ExtraOps_H0O0_numberactive(int PartId)
{
  xInstanceId InstId;
  XCONST_INST xPartTable *PartData;
  int Number = 0;

  PartData = xPartData[PartId];
  for (InstId = 0; InstId < PartData->MaxInstances; InstId++) {
    if (INSTANCE_VAR(InstId)->State != XDORMANT)
      Number++;
  }
  return Number;
}

SDL_PId z_U2ExtraOps_H0O2_getpid(int PartId, SDL_Integer PartIndex)
{
  xInstanceId InstId;
  XCONST_INST xPartTable *PartData;
  int Number = 1;

  PartData = xPartData[PartId];
  for (InstId = 0; InstId < PartData->MaxInstances; InstId++) {
    if (INSTANCE_VAR(InstId)->State != XDORMANT) {
      if (Number == PartIndex)
        return XPID(PartId, InstId);
      Number++;
    }
  }
  return SDL_NULL;
}



#else   COMMENT(( #ifdef XSCT_CMICRO ))

COMMENT(( Common functions for Validator and CCG kernels ))

static SDL_Boolean xxxSameBlockInstSet(xPrsNode FromP, xPrsNode ToP)
{
  xBlockNode FromBN, ToBN;
  xIdNode FromB, ToB;

  FromB = (xIdNode)FromP->InstNameNode->Parent;
  FromBN = FromP->BlockInst;
  while (FromB != 0) {
    ToB = (xIdNode)ToP->InstNameNode->Parent;
    ToBN = ToP->BlockInst;
    while (ToB != 0) {
      if (FromB == ToB) {
        return (ToBN == FromBN);
      }
      if (ToB->EC == xBlockEC)
        ToBN = ToBN->Container;
      ToB = ToB->Parent;
    }
    if (FromB->EC == xBlockEC)
      FromBN = FromBN->Container;
    FromB = FromB->Parent;
  }
  return SDL_False;
}

#ifdef XVALIDATOR

#define FIRST_ACTIVE_PROCESS(PrsIdNode) ( (PrsIdNode) ? xFirstActivePrs( (xPrsIdNode)PrsIdNode ) : NULL )
#define NEXT_ACTIVE_PROCESS(PrsNode)    ( xNextActivePrs(PrsNode) )
#define THREADED_LISTREAD_START
#define THREADED_LISTWRITE_START
#define THREADED_LISTACCESS_END

#else

#define FIRST_ACTIVE_PROCESS(PrsIdNode) ( (PrsIdNode) ? *( ((xPrsIdNode)PrsIdNode)->ActivePrsList ) : NULL )
#define NEXT_ACTIVE_PROCESS(PrsNode)    ( (PrsNode)->NextPrs )

#endif

SDL_Integer z_U2ExtraOps_H0O0_numberactive(xIdNode BlockId, int ContIndex, xPrsNode VarP)
{
  xPrsNode P;
  xPrsIdNode PrsId;
  SDL_Integer Result = 0;
#ifdef XPRSHASH
  int hash_idx;
#endif

  PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for (hash_idx = 0; hash_idx < XPRSHASHSIZE; hash_idx++) {
    for (P = ((xPrsIdNode)PrsId)->HashActivePrsList[hash_idx];
         P != (xPrsNode)0;
         P = P->NextPrs) {
      if (xxxSameBlockInstSet(VarP, P))
        Result++;
    }
  }
#else
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P) {
    if (xxxSameBlockInstSet(VarP, P))
      Result++;
    P = NEXT_ACTIVE_PROCESS(P);
  }
#endif
  THREADED_LISTACCESS_END
  return Result;
}

SDL_Integer z_U2ExtraOps_H0O1_numberactive2(xIdNode PrsId)
{
  xPrsNode P;
  SDL_Integer Result = 0;
#ifdef XPRSHASH
  int hash_idx;
#endif

  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for (hash_idx = 0; hash_idx < XPRSHASHSIZE; hash_idx++) {
    for (P = ((xPrsIdNode)PrsId)->HashActivePrsList[hash_idx];
         P != (xPrsNode)0;
         P = P->NextPrs) {
      Result++;
    }
  }
#else
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P) {
    Result++;
    P = NEXT_ACTIVE_PROCESS(P);
  }
#endif
  THREADED_LISTACCESS_END
  return Result;
}

SDL_PId z_U2ExtraOps_H0O2_getpid(xIdNode BlockId, int ContIndex, xPrsNode VarP, SDL_Integer PrsIndex)
{
  xPrsNode P;
  xPrsIdNode PrsId;
#ifdef XPRSHASH
  int hashindex;
#endif

  if (PrsIndex <= 0) return SDL_NULL;
  PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for(hashindex=0;hashindex<XPRSHASHSIZE && PrsIndex;hashindex++) {
    P = PrsId ? (((xPrsIdNode)PrsId)->HashActivePrsList[hashindex]) : NULL;
    while ( P ) {
      if (xxxSameBlockInstSet(VarP, P))
	PrsIndex--;
      if( !PrsIndex )
	break;
      P = P->NextPrs;
    }
  }
#else
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P && (PrsIndex>1)) {
    if (xxxSameBlockInstSet(VarP, P))
      PrsIndex--;
    P = NEXT_ACTIVE_PROCESS(P);
  }
  while (P && !xxxSameBlockInstSet(VarP, P)) {
    P = NEXT_ACTIVE_PROCESS(P);
  }
#endif
  THREADED_LISTACCESS_END
  if (P) return P->Self;
  return SDL_NULL;
}

SDL_PId z_U2ExtraOps_H0O3_getpid2(xIdNode PrsId, SDL_Integer PrsIndex)
{
  xPrsNode P;
#ifdef XPRSHASH
  int hashindex;
#endif
  if (PrsIndex <= 0) return SDL_NULL;
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for(hashindex=0;hashindex<XPRSHASHSIZE && PrsIndex>1;hashindex++) {
    P = PrsId ? (((xPrsIdNode)PrsId)->HashActivePrsList[hashindex]) : NULL;
    while (P && PrsIndex>1) {
      P = P->NextPrs;
      PrsIndex--;
    }
  }
#else
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P && (PrsIndex>1)) {
    PrsIndex--;
    P = NEXT_ACTIVE_PROCESS(P);
  }
#endif
  THREADED_LISTACCESS_END
  if (P) return P->Self;
  return SDL_NULL;
}

SDL_PId z_U2ExtraOps_H0O4_getpidbl(xPrsNode VarP, xIdNode BlockId, ...)
{
  va_list ap;
  xPrsNode P;
  xIdNode PrsId;
  int Index, NextIndex;

  va_start(ap, BlockId);
  Index = va_arg(ap, int);
  NextIndex = va_arg(ap, int);
  while (NextIndex > 0) {
    if (BlockId->EC == xBlockTypeEC) {
      BlockId = (xIdNode)xPrsInst((xIdNode)VarP->InstNameNode, BlockId, Index);
    } else {
      BlockId = ((xBlockIdNode)BlockId)->Contents[Index];
    }
    Index = NextIndex;
    NextIndex = va_arg(ap, int);
  }
  va_end(ap);

  PrsId = (xIdNode)((xBlockIdNode)BlockId)->BlockProcess;
  THREADED_LISTREAD_START
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P && (Index>1)) {
    if (xxxSameBlockInstSet(VarP, P))
      Index--;
    P = NEXT_ACTIVE_PROCESS(P);
  }
  while (P && !xxxSameBlockInstSet(VarP, P)) {
    P = NEXT_ACTIVE_PROCESS(P);
  }
  THREADED_LISTACCESS_END
  if (P) return P->Self;
  return SDL_NULL;
}

SDL_PId z_U2ExtraOps_H0O5_getpidbl2(xIdNode BlockId, SDL_Integer BlockIndex)
{
  xPrsNode P;
  xIdNode PrsId;
#ifdef XPRSHASH
  int hashindex;
#endif
  PrsId = (xIdNode)((xBlockIdNode)BlockId)->BlockProcess;
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for(hashindex=0;hashindex<XPRSHASHSIZE && BlockIndex>0;hashindex++) {
    P = PrsId ? (((xPrsIdNode)PrsId)->HashActivePrsList[hashindex]) : NULL;
    while (P && --BlockIndex>0) {
      P = P->NextPrs;
    }
  }
#else
  P = FIRST_ACTIVE_PROCESS(PrsId);
  while (P && (--BlockIndex>0))
    P = NEXT_ACTIVE_PROCESS(P);
#endif
  THREADED_LISTACCESS_END
  if (P) return P->Self;
  return SDL_NULL;
}



#ifdef XVALIDATOR

SDL_Boolean z_U2ExtraOps_H0O6_isa(SDL_Pid PI, xPrsIdNode PT)
{
  xPrsIdNode PrsId;
  if (xEq_SDL_PId_NULL(PI))
    return SDL_False;
  PrsId = GetPrs(PI)->TypeNameNode;
  while (PrsId) {
    if (PrsId == PT) return SDL_True;
    PrsId = PrsId->Super;
  }
  return SDL_False;
}

void z_U2ExtraOps_H0O8_appendpid(SDL_Pid PI, xIdNode BlockId, int ContIndex, xPrsNode VarP)
{
  xPrsNode  P;
  xPrsIdNode PrsId;
  xBlockNode BN;

  if (xEq_SDL_PId_NULL(PI)) return;
  P = GetPrs(PI);
  if (VarP->InstNameNode->EC != xProcessTypeEC) {
    PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);
    BN = VarP->BlockInst;
  } else if (P->InstNameNode->EC != xProcessTypeEC) {
    PrsId = xPrsInst((xIdNode)P->InstNameNode, BlockId, ContIndex);
    BN = P->BlockInst;
  } else {
    return;
  }
  if (PrsId == NULL)
    return;
  if (!z_U2ExtraOps_H0O6_isa(PI, PrsId->Super))
    return;

  if ( (PrsId->MaxNoOfInst != -1) &&
       (xNoOfActivePrs2(PrsId, BN) >= PrsId->MaxNoOfInst) ) {
    return;
  }
  P->InstNameNode = PrsId;
  P->BlockInst = BN;
}



#else   COMMENT(( #ifdef XVALIDATOR ))

SDL_Boolean z_U2ExtraOps_H0O6_isa(SDL_Pid PI, xPrsIdNode PT)
{
  xPrsIdNode PrsId;
  if (xEq_SDL_PId_NULL(PI)) return SDL_False;
  PrsId = PI.LocalPId->PrsP->TypeNameNode;
  while (PrsId) {
    if (PrsId == PT) return SDL_True;
    PrsId = PrsId->Super;
  }
  return SDL_False;
}

void z_U2ExtraOps_H0O8_appendpid(SDL_Pid PI, xIdNode BlockId, int ContIndex, xPrsNode VarP)
{
  xPrsNode *Temp;
  xPrsNode  P;
  xPrsIdNode PrsId;
  xBlockNode BN;

  if (xEq_SDL_PId_NULL(PI)) return;
  P = PI.LocalPId->PrsP;
  if (VarP->InstNameNode->EC != xProcessTypeEC) {
    PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);
    BN = VarP->BlockInst;
  } else if (P->InstNameNode->EC != xProcessTypeEC) {
    PrsId = xPrsInst((xIdNode)P->InstNameNode, BlockId, ContIndex);
    BN = P->BlockInst;
  } else {
    return;
  }
  if (PrsId == NULL)
    return;
  if (!z_U2ExtraOps_H0O6_isa(PI, PrsId->Super))
    return;
  THREADED_LISTWRITE_START
  if ( (PrsId->MaxNoOfInst != -1) &&
       (xNoOfActivePrs(PrsId, BN) >= PrsId->MaxNoOfInst) ) {
    THREADED_LISTACCESS_END
    return;
  }
#ifdef XPRSHASH
  xPrsHashRemoveFromActiveList(P->InstNameNode, P);
  xPrsHashAppendToActiveList(PrsId, P);
#else
  Temp = P->InstNameNode->ActivePrsList;
  if ((*Temp) == P) {
    (*Temp) = (*Temp)->NextPrs;
    if (! (*Temp)) {
      P->InstNameNode->LastActivePrs = (xPrsNode)0;
    }
  } else {
    while ((*Temp)->NextPrs != P)
      Temp = &(*Temp)->NextPrs;
    if (! (*Temp)->NextPrs->NextPrs ) {
      P->InstNameNode->LastActivePrs = *Temp;
    }
    (*Temp)->NextPrs = P->NextPrs;
  }
  if (! *PrsId->ActivePrsList) {
    *PrsId->ActivePrsList = P;
  } else {
    PrsId->LastActivePrs->NextPrs = P;
  }
  PrsId->LastActivePrs = P;
  P->NextPrs = (xPrsNode)0;
#endif

  P->InstNameNode = PrsId;
#ifdef XNRINST
  P->Self.LocalPId->InstNr = P->InstNameNode->NextNr++;
#endif
  xDecBlockRef(P->BlockInst);
  P->BlockInst = BN;
  BN->RefCounter--;
  THREADED_LISTACCESS_END
}

void z_U2ExtraOps_H0O9_appendpid2(SDL_Pid PI, xIdNode PrsId)
{
  xPrsNode *Temp;
  xPrsNode  P;
  if (xEq_SDL_PId_NULL(PI)) return;
  P = PI.LocalPId->PrsP;
  if (!z_U2ExtraOps_H0O6_isa(PI, ((xPrsIdNode)PrsId)->Super))
    return;
  THREADED_LISTWRITE_START
  if ( (((xPrsIdNode)PrsId)->MaxNoOfInst != -1) &&
       (xNoOfActivePrs((xPrsIdNode)PrsId, xFindBlockNode(PrsId, P)) >=
        ((xPrsIdNode)PrsId)->MaxNoOfInst) ) {
    THREADED_LISTACCESS_END
    return;
  }
#ifdef XPRSHASH
  xPrsHashRemoveFromActiveList(P->InstNameNode, P);
  xPrsHashAppendToActiveList((xPrsIdNode)PrsId, P);
#else
  Temp = P->InstNameNode->ActivePrsList;
  if ((*Temp) == P) {
    (*Temp) = (*Temp)->NextPrs;
    if (! (*Temp)) {
      P->InstNameNode->LastActivePrs = (xPrsNode)0;
    }
  } else {
    while ((*Temp)->NextPrs != P)
      Temp = &(*Temp)->NextPrs;
    if (! (*Temp)->NextPrs->NextPrs ) {
      P->InstNameNode->LastActivePrs = *Temp;
    }
    (*Temp)->NextPrs = P->NextPrs;
  }
  if (! *((xPrsIdNode)PrsId)->ActivePrsList) {
    *((xPrsIdNode)PrsId)->ActivePrsList = P;
  } else {
    ((xPrsIdNode)PrsId)->LastActivePrs->NextPrs = P;
  }
  ((xPrsIdNode)PrsId)->LastActivePrs = P;
  P->NextPrs = (xPrsNode)0;
#endif
  P->InstNameNode = (xPrsIdNode)PrsId;
#ifdef XNRINST
  P->Self.LocalPId->InstNr = P->InstNameNode->NextNr++;
#endif
  THREADED_LISTACCESS_END
}

#ifndef XPRSHASH

static void xxxLocalRemove(xPrsIdNode PrsId, xPrsNode P, xPrsNode Pre)
{
  if (Pre)
    Pre->NextPrs = P->NextPrs;
  else
    *(PrsId->ActivePrsList) = P->NextPrs;
  if (P == PrsId->LastActivePrs) {
    PrsId->LastActivePrs = Pre;
  }

  PrsId = P->TypeNameNode;
  if (! *PrsId->ActivePrsList) {
    *PrsId->ActivePrsList = P;
  } else {
    PrsId->LastActivePrs->NextPrs = P;
  }
  PrsId->LastActivePrs = P;
  P->NextPrs = (xPrsNode)0;
  P->InstNameNode = PrsId;
#ifdef XNRINST
  P->Self.LocalPId->InstNr = P->InstNameNode->NextNr++;
#endif
  return;
}

#else

static void xxxLocalRemovePrsHash(xPrsIdNode PrsId, int hash_idx, xPrsNode P, xPrsNode Pre)
{
#if defined(XPRSCOUNT) || defined(XPRSCOUNTHASH)
    xPrsCountStruct* PrsCount;
#endif

  if (Pre)
    Pre->NextPrs = P->NextPrs;
  else
    PrsId->HashActivePrsList[hash_idx] = P->NextPrs;
  if (P == PrsId->LastActivePrs[hash_idx]) {
    PrsId->LastActivePrs[hash_idx] = Pre;
  }
#if defined(XPRSCOUNT) || defined(XPRSCOUNTHASH)
  PrsCount = xPrsCountLookup(PrsId, P);
  if (PrsCount) PrsCount->prsCount--;
#endif

  PrsId = P->TypeNameNode;
  xPrsHashAppendToActiveList(PrsId, P);
  P->InstNameNode = PrsId;
#ifdef XNRINST
  P->Self.LocalPId->InstNr = P->InstNameNode->NextNr++;
#endif

}

#endif

void z_U2ExtraOps_H0OA_removepid(xIdNode BlockId, int ContIndex, xPrsNode VarP, SDL_Integer PrsIndex)
{
  xPrsNode P, tmp;
  xPrsIdNode PrsId;
#ifdef XPRSHASH
  int hashindex;
#endif

  if (PrsIndex <= 0) return;
  tmp = 0;
  PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);

  THREADED_LISTREAD_START
#ifdef XPRSHASH
    for (hashindex = 0;
         hashindex < XPRSHASHSIZE && PrsIndex > 1;
         hashindex++) {
    P = PrsId ? (((xPrsIdNode)PrsId)->HashActivePrsList[hashindex]) : NULL;

    while (P && PrsIndex > 1) {
      if (xxxSameBlockInstSet(VarP, P)) {
        PrsIndex--;
        if (PrsIndex == 1) break;
      }
      tmp = P;
      P = P->NextPrs;
    }
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemovePrsHash((xPrsIdNode)PrsId, hashindex, P, tmp);
#else
  P = PrsId ? *(((xPrsIdNode)PrsId)->ActivePrsList) : NULL;
  while (P && (PrsIndex>1)) {
    if (xxxSameBlockInstSet(VarP, P))
      PrsIndex--;
    tmp = P;
    P = P->NextPrs;
  }
  while (P && !xxxSameBlockInstSet(VarP, P)) {
    tmp = P;
    P = P->NextPrs;
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemove(PrsId, P, tmp);
#endif
  THREADED_LISTACCESS_END
  return;
}

void z_U2ExtraOps_H0OB_removepid2(xIdNode PrsId, SDL_Integer PrsIndex)
{
  xPrsNode P, tmp;
#ifdef XPRSHASH
  int hashindex;
#endif

  if (PrsIndex <= 0) return;
  tmp = 0;
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  for (hashindex = 0;
       hashindex < XPRSHASHSIZE && PrsIndex > 1;
       hashindex++) {
    P = PrsId ? (((xPrsIdNode)PrsId)->HashActivePrsList[hashindex]) : NULL;
    while (P && (PrsIndex > 1)) {
      tmp = P;
      P = P->NextPrs;
      PrsIndex--;
    }
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemovePrsHash((xPrsIdNode)PrsId, hashindex, P, tmp);
#else
  P = *(((xPrsIdNode)PrsId)->ActivePrsList);
  tmp = 0;
  while (P && (PrsIndex>1)) {
    tmp = P;
    P = P->NextPrs;
    PrsIndex--;
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemove((xPrsIdNode)PrsId, P, tmp);
#endif
  THREADED_LISTACCESS_END
  return;
}

void z_U2ExtraOps_H0OC_removepidvalue(xIdNode BlockId, int ContIndex, xPrsNode VarP, SDL_Pid PI)
{
  xPrsNode P, tmp;
  xPrsIdNode PrsId;
#ifdef XPRSHASH
  int hash_idx;
#endif
  if (xEq_SDL_PId_NULL(PI)) return;
  PrsId = xPrsInst((xIdNode)VarP->InstNameNode, BlockId, ContIndex);
  tmp = 0;
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  hash_idx = abs((int)(PI.LocalPId->PrsP) >> XPRSHASHSHIFT) % XPRSHASHSIZE;
  P = ((xPrsIdNode)PrsId)->HashActivePrsList[hash_idx];
  while (P && (P != PI.LocalPId->PrsP)) {
    tmp = P;
    P = P->NextPrs;
  }
  if (!P || !xxxSameBlockInstSet(VarP, P)) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemovePrsHash((xPrsIdNode)PrsId, hash_idx, P, tmp);
#else
  P = PrsId ? *(((xPrsIdNode)PrsId)->ActivePrsList) : NULL;
  while (P && (P != PI.LocalPId->PrsP)) {
    tmp = P;
    P = P->NextPrs;
  }
  if (!P || !xxxSameBlockInstSet(VarP, P)) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemove(PrsId, P, tmp);
#endif
  THREADED_LISTACCESS_END
  return;
}

void z_U2ExtraOps_H0OD_removepidvalue2(xIdNode PrsId, SDL_Pid PI)
{
  xPrsNode P, tmp;
#ifdef XPRSHASH
  int hash_idx;
  #endif

  if (xEq_SDL_PId_NULL(PI)) return;
  tmp = 0;
  THREADED_LISTREAD_START
#ifdef XPRSHASH
  hash_idx = abs((int)(PI.LocalPId->PrsP) >> XPRSHASHSHIFT) % XPRSHASHSIZE;
  P = ((xPrsIdNode)PrsId)->HashActivePrsList[hash_idx];
  while (P && (P != PI.LocalPId->PrsP)) {
    tmp = P;
    P = P->NextPrs;
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemovePrsHash((xPrsIdNode)PrsId, hash_idx, P, tmp);
#else
  P = *(((xPrsIdNode)PrsId)->ActivePrsList);
  tmp = 0;
  while (P && (P != PI.LocalPId->PrsP)) {
    tmp = P;
    P = P->NextPrs;
  }
  if (!P) {
    THREADED_LISTACCESS_END
    return;
  }
  xxxLocalRemove((xPrsIdNode)PrsId, P, tmp);
#endif
  THREADED_LISTACCESS_END
  return;
}

#endif   COMMENT(( #ifdef XVALIDATOR #else ))

#endif   COMMENT(( #ifdef XSCT_CMICRO #else ))



/*************************************************************************
**                  SECTION Variables and Functions                     **
*************************************************************************/

/*****
* PACKAGE U2ExtraOps
* #SDTREF(TEXT,"C:\\Program Files (x86)\\IBM\\Rational\\TAU\\4.3\\addins\\sdlkernels\\ADT\\u2ExtraOps.pr",8,9)
******/
XCONST struct xPackageIdStruct yPacR_z_U2ExtraOps__U2ExtraOps = {xPackageEC ,
  (xIdNode)0, (xIdNode)0, (xIdNode)&xSymbolTableIdRec,
  "U2ExtraOps" xIdNumber(0) XCOMMON_EXTRAS xIdNames(0) XPAC_EXTRAS};

/*************************************************************************
**                       SECTION Initialization                         **
*************************************************************************/
void yInit_U2ExtraOps (void)
{
  static int IsCalled = 0;
  int  Temp;
  YINIT_TEMP_VARS
  if (IsCalled) {
    return;
  }
  IsCalled = 1;
  xInsertIdNode((xIdNode)&yPacR_z_U2ExtraOps__U2ExtraOps);
}
