
/* Program generated by Cbasic 4.3.0.0.13660 */
#define XSCT_CBASIC

#define C_TRANSLATOR_4_1
#define XENABLE_VERSION_CHECK

#include "scttypes.h"
#include "U2ExtraOps.h"
#include "U2ctypes.h"
#include "MainApplicationPackage.h"
#ifdef XUSE_SIGNAL_NUMBERS
#include "Main.hs"
#endif
#ifdef XCTRACE
static char  xFileName[] = "MainApplicationPackage.c";
#endif


/*************************************************************************
**                  #CODE directives, #BODY sections                    **
*************************************************************************/

/*************************************************************************
**                  SECTION Variables and Functions                     **
*************************************************************************/

/*****
* PACKAGE MainApplicationPackage
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#*dMmOEwBTPALSmtgnIJJbPVE|pos(1,9)")
******/
XCONST struct xPackageIdStruct yPacR_z_MainApplicationPackage__MainApplicationPackage =
  {xPackageEC , (xIdNode)0, (xIdNode)0, (xIdNode)&xSymbolTableIdRec,
  "MainApplicationPackage" xIdNumber(0) XCOMMON_EXTRAS xIdNames(0) XPAC_EXTRAS};

/*****
* BLOCK TYPE Main
* <<PACKAGE MainApplicationPackage>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#714hgIhDJoFLC1GZbEoEJVhV|pos(1,16)")
******/
XCONST struct xBlockIdStruct yBloR_z_MainApplicationPackage_Z0_Main =
  {xBlockTypeEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage,
  "Main" xIdNumber(0) XCOMMON_EXTRAS, (xBlockIdNode)0, (xIdNode *)0,
  (xPrdIdNode *)0, (xViewListRec *)0, (xViewIndexRec *)0 xNrInst(1), 1, 0,
  (xPrsIdNode)0 xTrace(-1) xMSCETrace(-1) xGRTrace(-1) xMSCETrace(0)
  XBLO_EXTRAS};

/*****
* PROCESS TYPE @implicit_process_0
* <<PACKAGE MainApplicationPackage/BLOCK TYPE Main>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#0d--iE-oh1iLkDAcZEuFSvRE|pos(1,22)")
******/
#ifdef XCOVERAGE
long int yPrsC_z_MainApplicationPackage_Z0T0_implicit_process_0[ySym_z_MainApplicationPackage_Z0T0_implicit_process_0+1];
#endif
XCONST XSIGTYPE yPrsS_z_MainApplicationPackage_Z0T0_implicit_process_0[] =
  {SIGNAL_NAME(pREPLY_oppp, &ySigR_pREPLY_z_MainApplicationPackage_I0_oppp),
  (XSIGTYPE)0};
XCONST xStateIdNode yPrsT_z_MainApplicationPackage_Z0T0_implicit_process_0[] =
  {&xStartStateIdRec, &yStaR_z_MainApplicationPackage_Z0T0E0_st};
static xIdNode yPrsO_z_MainApplicationPackage_Z0T0_implicit_process_0[] =
  {(xIdNode)0, (xIdNode)0};
static XPRSNODE yPrsA_z_MainApplicationPackage_Z0T0_implicit_process_0 = (XPRSNODE)0;
static XPRSNODE yPrsB_z_MainApplicationPackage_Z0T0_implicit_process_0 = (XPRSNODE)0;
XCONST struct xPrsIdStruct yPrsR_z_MainApplicationPackage_Z0T0_implicit_process_0 =
  {xProcessTypeEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yBloR_z_MainApplicationPackage_Z0_Main,
  "@implicit_process_0" xIdNumber(0) XCOMMON_EXTRAS,
  yPrsT_z_MainApplicationPackage_Z0T0_implicit_process_0,
  yPrsS_z_MainApplicationPackage_Z0T0_implicit_process_0 xOptChan(
  yPrsO_z_MainApplicationPackage_Z0T0_implicit_process_0),
  &ySigR_z_MainApplicationPackage_Z0T0_implicit_process_0, -1 xNrInst(1), 0,
  &yPrsB_z_MainApplicationPackage_Z0T0_implicit_process_0,
  (xptrint)sizeof(yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0)
  xPrsPrioPar(xDefaultPrioProcess),
  &yPrsA_z_MainApplicationPackage_Z0T0_implicit_process_0 xTrace(-1)
  xGRTrace(-1) xBreakB(yRef_z_MainApplicationPackage_Z0T0_implicit_process_0)
  xBreakB(ySym_z_MainApplicationPackage_Z0T0_implicit_process_0) xBreakB(0)
  xMSCETrace(-1)
  xCoverage(yPrsC_z_MainApplicationPackage_Z0T0_implicit_process_0)
  xCoverage(0) xCoverage(0),
  yPAD_z_MainApplicationPackage_Z0T0_implicit_process_0,
  yFree_z_MainApplicationPackage_Z0T0_implicit_process_0,
  yIni_z_MainApplicationPackage_Z0T0_implicit_process_0, (xPrsIdNode)0,
  (xPrdIdNode *)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#0d--iE-oh1iLkDAcZEuFSvRE|pos(1,22)\")")
  xThreadName(0) xThreadName(0)
  XPRS_EXTRAS(z_MainApplicationPackage_Z0T0_implicit_process_0)};
static xSignalNode ySigA_z_MainApplicationPackage_Z0T0_implicit_process_0 = (xSignalNode)0;
XCONST struct xSignalIdStruct ySigR_z_MainApplicationPackage_Z0T0_implicit_process_0 =
  {xStartUpSignalEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yBloR_z_MainApplicationPackage_Z0_Main xIdNames("-") xIdNumber(0)
  XCOMMON_EXTRAS,
  (xptrint)sizeof(ySignalPar_z_MainApplicationPackage_Z0T0_implicit_process_0),
  &ySigA_z_MainApplicationPackage_Z0T0_implicit_process_0, 0 xFreS(0)
  SIGCODE(STARTUPSIGNAL)
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#0d--iE-oh1iLkDAcZEuFSvRE|pos(1,22)\")")
  xSigPrioPar(xDefaultPrioSignal) ZERO_OFFSET XSIG_EXTRAS};
XPROCESSDEF_C(implicit_process_0,
  "implicit_process_0",z_MainApplicationPackage_Z0T0_implicit_process_0,
  yPAD_z_MainApplicationPackage_Z0T0_implicit_process_0,
  yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0)
void yFree_z_MainApplicationPackage_Z0T0_implicit_process_0(void *yVarP)
{
}
void yIni_z_MainApplicationPackage_Z0T0_implicit_process_0(xPrsNode VarP)
{
  yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0 *yVarP = (yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0 *)VarP;
}

/*+++++
* GR ref function for process @implicit_process_0
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#0d--iE-oh1iLkDAcZEuFSvRE|pos(1,41)")
++++++*/
#ifdef XBREAKBEFORE
char * yRef_z_MainApplicationPackage_Z0T0_implicit_process_0 (int SymbolNo, xSymbolType *SymbolType)
{
  switch (SymbolNo) {
    case 0: *SymbolType = xsStart;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#9FqrPERSFkFLD7wXNIkYabzI|pos(1,13)\")";
    case 1: *SymbolType = xspREPLYInput;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#x-YP*VbvncELHFRY3EMz2UJI|pos(1,25)\")";
    case 3: *SymbolType = xsRPC;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#x-YP*VbvncELHFRY3EMz2UJI|pos(1,25)\")";
    case 4: *SymbolType = xsNextstate;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#W3Ng7EioSy0LhWxW1LdidWuE|pos(1,17)\")";
    default : *SymbolType = xsNoSuchSymbolType; return "";
  }
}
#endif

/*+++++
* Function for process @implicit_process_0
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#0d--iE-oh1iLkDAcZEuFSvRE|pos(1,41)")
++++++*/
YPAD_FUNCTION(yPAD_z_MainApplicationPackage_Z0T0_implicit_process_0)
{
  YPAD_YSVARP
  YPAD_YVARP(yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0)
  YPAD_TEMP_VARS
  YPRSNAME_VAR("@implicit_process_0")

  BEGIN_PAD(yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0)
#ifndef XNOPROCATSTARTUP
  {
    xPrdNode ActivePrd;
    ActivePrd = xGetActivePrd((xPrsNode)yVarP);
    while (ActivePrd != 0) {
#ifdef XVALIDATOR_LIB
      if ((*ActivePrd->RestartPRD)(VarP, ndstate)) {
#else
      if ((*ActivePrd->RestartPRD)(VarP)) {
#endif
        return;
      }
      ActivePrd = xGetActivePrd((xPrsNode)yVarP);
#ifdef XBREAKBEFORE
      if (ActivePrd != 0) {
        XBETWEEN_SYMBOLS(ActivePrd->RestartAddress, 160)
      } else {
        XBETWEEN_SYMBOLS(yVarP->RestartAddress,  162)
      }
#endif
    }
  }
#endif

  LOOP_LABEL
  switch (yVarP->RestartAddress) {

/* ----- START ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#9FqrPERSFkFLD7wXNIkYabzI|pos(1,13)") */
  case 0:
    BEGIN_START_TRANSITION(ySignalPar_z_MainApplicationPackage_Z0T0_implicit_process_0)
    XAT_FIRST_SYMBOL(0)
    XBETWEEN_SYMBOLS(3, 177)
    XBETWEEN_STMTS(3, 178)

/* ----- REMOTE PROCEDURE CALL oppp ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#x-YP*VbvncELHFRY3EMz2UJI|pos(1,25)") */
#ifdef XCASELABELS
  case 3:
#endif
    ALLOC_SIGNAL(pCALL_oppp, ySigN_pCALL_z_MainApplicationPackage_I0_oppp,
      TO_PROCESS(O, xPrsInst((xIdNode)yVarP->InstNameNode,
      (xIdNode)&yBloR_z_MainApplicationPackage_Z0_Main,
      yPrsE_z_MainApplicationPackage_Z0P0_O)), XSIGNALHEADERTYPE)
    SIGNAL_ALLOC_ERROR
    SDL_2OUTPUT_RPC_CALL(xDefaultPrioSignal, (xIdNode *)0, pCALL_oppp,
      ySigN_pCALL_z_MainApplicationPackage_I0_oppp, TO_PROCESS(O,
      xPrsInst((xIdNode)yVarP->InstNameNode,
      (xIdNode)&yBloR_z_MainApplicationPackage_Z0_Main,
      yPrsE_z_MainApplicationPackage_Z0P0_O)), 0, "pCALL_oppp")
    SIGNAL_ALLOC_ERROR_END
    XAT_LAST_SYMBOL
    SDL_RPCWAIT_NEXTSTATE(ySigN_pREPLY_z_MainApplicationPackage_I0_oppp,
      pREPLY_oppp, 1)

/*-----
* RPC Reply INPUT pREPLY_oppp
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#x-YP*VbvncELHFRY3EMz2UJI|pos(1,25)")
------*/
  case 1: ;
    XRPC_REPLY_INPUT
    XAT_FIRST_SYMBOL(1)
    XOS_TRACE_INPUT("pREPLY_oppp")
    XBETWEEN_SYMBOLS(4, 208)

/* ----- NEXTSTATE st ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#W3Ng7EioSy0LhWxW1LdidWuE|pos(1,17)") */
#ifdef XCASELABELS
  case 4:
#endif
    XAT_LAST_SYMBOL
    SDL_NEXTSTATE(st, z_MainApplicationPackage_Z0T0E0_st, "st")
  default : return;
  }
}

/*****
* STATE st
* <<PACKAGE MainApplicationPackage/BLOCK TYPE Main
*     /PROCESS TYPE @implicit_process_0>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#zLJmuLMb565LyiTjqLumy8xE|pos(1,19)")
******/
static XCONST xInputAction yStaH_z_MainApplicationPackage_Z0T0E0_st[] =
  {xDiscard};
static XCONST XINPUTREFTYPE yStaI_z_MainApplicationPackage_Z0T0E0_st[] = {0};
#ifdef XCOVERAGE
static long int yStaC_z_MainApplicationPackage_Z0T0E0_st[0+1];
#endif
XCONST struct xStateIdStruct yStaR_z_MainApplicationPackage_Z0T0E0_st =
  {xStateEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrsR_z_MainApplicationPackage_Z0T0_implicit_process_0,
  "st" xIdNumber(0) XCOMMON_EXTRAS, z_MainApplicationPackage_Z0T0E0_st,
  yStaH_z_MainApplicationPackage_Z0T0E0_st,
  yStaI_z_MainApplicationPackage_Z0T0E0_st, 0, 0, 0
  xCoverage(yStaC_z_MainApplicationPackage_Z0T0E0_st), (xStateIdNode)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#zLJmuLMb565LyiTjqLumy8xE|pos(1,19)\")")
  XSTA_EXTRAS};

/*****
* PROCEDURE op
* <<PACKAGE MainApplicationPackage/BLOCK TYPE Main
*     /PROCESS TYPE @implicit_process_0>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#fbaNtEfxZVDLA8ia1El5WCSV|pos(1,23)")
******/
#ifdef XCOVERAGE
long int yPrdC_z_MainApplicationPackage_Z0T0O0_op[ySym_z_MainApplicationPackage_Z0T0O0_op+1];
#endif
static XCONST xStateIdNode yPrdT_z_MainApplicationPackage_Z0T0O0_op[] =
  {&xStartStateIdRec};
static xPrdNode yPrdA_z_MainApplicationPackage_Z0T0O0_op = (xPrdNode)0;
XCONST struct xPrdIdStruct yPrdR_z_MainApplicationPackage_Z0T0O0_op =
  {xProcedureEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrsR_z_MainApplicationPackage_Z0T0_implicit_process_0,
  "op" xIdNumber(0) XCOMMON_EXTRAS, yPrdT_z_MainApplicationPackage_Z0T0O0_op,
  yPrsS_z_MainApplicationPackage_Z0T0_implicit_process_0,
  z_MainApplicationPackage_Z0T0O0_op, yFree_z_MainApplicationPackage_Z0T0O0_op,
  (xptrint)sizeof(yVDef_z_MainApplicationPackage_Z0T0O0_op),
  &yPrdA_z_MainApplicationPackage_Z0T0O0_op
  xBreakB(yRef_z_MainApplicationPackage_Z0T0O0_op)
  xBreakB(ySym_z_MainApplicationPackage_Z0T0O0_op) xBreakB(0)
  xCoverage(yPrdC_z_MainApplicationPackage_Z0T0O0_op), (xPrdIdNode)0,
  (xPrdIdNode *)0 XPRD_EXTRAS};
void yFree_z_MainApplicationPackage_Z0T0O0_op(void *yVarP)
{
}

/*+++++
* GR ref function for procedure op
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#fbaNtEfxZVDLA8ia1El5WCSV|pos(1,25)")
++++++*/
#ifdef XBREAKBEFORE
char * yRef_z_MainApplicationPackage_Z0T0O0_op (int SymbolNo, xSymbolType *SymbolType)
{
  switch (SymbolNo) {
    case 0: *SymbolType = xsStart;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#IPL7REF8mEBLh0pdsIX1GgCV|pos(1,17)\")";
    case 1: *SymbolType = xsTask;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#@NO@GUID|pos(1,21)\")";
    case 2: *SymbolType = xsReturn;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#@NO@GUID|pos(1,21)\")";
    default : *SymbolType = xsNoSuchSymbolType; return "";
  }
}
#endif

/*+++++
* Function for procedure op
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#fbaNtEfxZVDLA8ia1El5WCSV|pos(1,25)")
++++++*/
YPRD_FUNCTION(z_MainApplicationPackage_Z0T0O0_op)
{
  YPAD_YSVARP
  YPRD_YVARP(yVDef_z_MainApplicationPackage_Z0T0_implicit_process_0)
  yVDef_z_MainApplicationPackage_Z0T0O0_op * yPrdVarP;
  YPRD_TEMP_VARS
  YPRDNAME_VAR("op")
    yPrdVarP =
    (yVDef_z_MainApplicationPackage_Z0T0O0_op *)xGetActivePrd((xPrsNode)yVarP);

  LOOP_LABEL_PRD_NOSTATE
  switch (yPrdVarP->RestartAddress) {

/* ----- START ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#IPL7REF8mEBLh0pdsIX1GgCV|pos(1,17)") */
  case 0:
    XAT_FIRST_SYMBOL(0)
    XBETWEEN_SYMBOLS_PRD(1, 311)

/* ----- TASK   ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#@NO@GUID|pos(1,21)") */
#ifdef XCASELABELS
  case 1:
#endif
    #ifdef XTRACE
      xTraceTask(" ");
    #endif
#ifdef XMSCE
    xMSCETask(VarP, " ");
#endif
                    COMMENT( Extra dummy statement 'if (true)' is generated to enable stepping to informal code in ModelVerifier )
                    xInformalOperator();

    XBETWEEN_SYMBOLS_PRD(2, 327)

/* ----- RETURN ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#@NO@GUID|pos(1,21)") */
#ifdef XCASELABELS
  case 2:
#endif
    SDL_RETURN
  }
  XEND_PRD
}

/*****
* PROCESS TYPE OS
* <<PACKAGE MainApplicationPackage>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,18)")
******/
#ifdef XCOVERAGE
long int yPrsC_z_MainApplicationPackage_T0_OS[ySym_z_MainApplicationPackage_T0_OS+1];
#endif
XCONST XSIGTYPE yPrsS_z_MainApplicationPackage_T0_OS[] =
  {SIGNAL_NAME(pCALL_oppp, &ySigR_pCALL_z_MainApplicationPackage_I0_oppp),
  (XSIGTYPE)0};
XCONST xStateIdNode yPrsT_z_MainApplicationPackage_T0_OS[] =
  {&xStartStateIdRec, &yStaR_z_MainApplicationPackage_T0E0_wait_for_calls};
static xIdNode yPrsO_z_MainApplicationPackage_T0_OS[] = {(xIdNode)0,
  (xIdNode)0};
static XPRSNODE yPrsA_z_MainApplicationPackage_T0_OS = (XPRSNODE)0;
static XPRSNODE yPrsB_z_MainApplicationPackage_T0_OS = (XPRSNODE)0;
XCONST struct xPrsIdStruct yPrsR_z_MainApplicationPackage_T0_OS =
  {xProcessTypeEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage,
  "OS" xIdNumber(0) XCOMMON_EXTRAS, yPrsT_z_MainApplicationPackage_T0_OS,
  yPrsS_z_MainApplicationPackage_T0_OS xOptChan(
  yPrsO_z_MainApplicationPackage_T0_OS), &ySigR_z_MainApplicationPackage_T0_OS,
  -1 xNrInst(1), 0, &yPrsB_z_MainApplicationPackage_T0_OS,
  (xptrint)sizeof(yVDef_z_MainApplicationPackage_T0_OS)
  xPrsPrioPar(xDefaultPrioProcess), &yPrsA_z_MainApplicationPackage_T0_OS
  xTrace(-1) xGRTrace(-1) xBreakB(yRef_z_MainApplicationPackage_T0_OS)
  xBreakB(ySym_z_MainApplicationPackage_T0_OS) xBreakB(1) xMSCETrace(-1)
  xCoverage(yPrsC_z_MainApplicationPackage_T0_OS) xCoverage(0) xCoverage(0),
  yPAD_z_MainApplicationPackage_T0_OS, yFree_z_MainApplicationPackage_T0_OS,
  yIni_z_MainApplicationPackage_T0_OS, (xPrsIdNode)0, (xPrdIdNode *)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,18)\")")
  xThreadName(0) xThreadName(0) XPRS_EXTRAS(z_MainApplicationPackage_T0_OS)};
static xSignalNode ySigA_z_MainApplicationPackage_T0_OS = (xSignalNode)0;
XCONST struct xSignalIdStruct ySigR_z_MainApplicationPackage_T0_OS =
  {xStartUpSignalEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage
  xIdNames("-") xIdNumber(0) XCOMMON_EXTRAS,
  (xptrint)sizeof(ySignalPar_z_MainApplicationPackage_T0_OS),
  &ySigA_z_MainApplicationPackage_T0_OS, 0 xFreS(0) SIGCODE(STARTUPSIGNAL)
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,18)\")")
  xSigPrioPar(xDefaultPrioSignal) ZERO_OFFSET XSIG_EXTRAS};
XPROCESSDEF_C(OS,"OS",z_MainApplicationPackage_T0_OS,
  yPAD_z_MainApplicationPackage_T0_OS,yVDef_z_MainApplicationPackage_T0_OS)
void yFree_z_MainApplicationPackage_T0_OS(void *yVarP)
{
}
void yIni_z_MainApplicationPackage_T0_OS(xPrsNode VarP)
{
  yVDef_z_MainApplicationPackage_T0_OS *yVarP = (yVDef_z_MainApplicationPackage_T0_OS *)VarP;
}

/*+++++
* GR ref function for process OS
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,20)")
++++++*/
#ifdef XBREAKBEFORE
char * yRef_z_MainApplicationPackage_T0_OS (int SymbolNo, xSymbolType *SymbolType)
{
  switch (SymbolNo) {
    case 0: *SymbolType = xsStart;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,9)\")";
    case 1: *SymbolType = xspCALLInput;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 2: *SymbolType = xspREPLYOutput;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 3: *SymbolType = xsNextstate;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,13)\")";
    case 4: *SymbolType = xspCALLProcedureCall;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 5: *SymbolType = xspCALLNextstate;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    default : *SymbolType = xsNoSuchSymbolType; return "";
  }
}
#endif

/*+++++
* Function for process OS
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,20)")
++++++*/
YPAD_FUNCTION(yPAD_z_MainApplicationPackage_T0_OS)
{
  YPAD_YSVARP
  YPAD_YVARP(yVDef_z_MainApplicationPackage_T0_OS)
  YPAD_TEMP_VARS
  YPRSNAME_VAR("OS")

  BEGIN_PAD(yVDef_z_MainApplicationPackage_T0_OS)
#ifndef XNOPROCATSTARTUP
  {
    xPrdNode ActivePrd;
    ActivePrd = xGetActivePrd((xPrsNode)yVarP);
    while (ActivePrd != 0) {
#ifdef XVALIDATOR_LIB
      if ((*ActivePrd->RestartPRD)(VarP, ndstate)) {
#else
      if ((*ActivePrd->RestartPRD)(VarP)) {
#endif
        return;
      }
      ActivePrd = xGetActivePrd((xPrsNode)yVarP);
#ifdef XBREAKBEFORE
      if (ActivePrd != 0) {
        XBETWEEN_SYMBOLS(ActivePrd->RestartAddress, 443)
      } else {
        XBETWEEN_SYMBOLS(yVarP->RestartAddress,  445)
      }
#endif
    }
  }
#endif

  LOOP_LABEL
  switch (yVarP->RestartAddress) {

/* ----- START ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,9)") */
  case 0:
    BEGIN_START_TRANSITION(ySignalPar_z_MainApplicationPackage_T0_OS)
    XAT_FIRST_SYMBOL(0)
    XBETWEEN_SYMBOLS(3, 460)

/* ----- NEXTSTATE wait_for_calls ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,13)") */
#ifdef XCASELABELS
  case 3:
#endif
    XAT_LAST_SYMBOL
    SDL_NEXTSTATE(wait_for_calls, z_MainApplicationPackage_T0E0_wait_for_calls,
      "wait_for_calls")

/*-----
* Implicit INPUT pCALL_oppp
------*/
  case 1:
    XAT_FIRST_SYMBOL(1)
    XOS_TRACE_INPUT("pCALL_oppp")
    XRPC_SAVE_SENDER
    ALLOC_REPLY_SIGNAL(pREPLY_oppp,
      ySigN_pREPLY_z_MainApplicationPackage_I0_oppp, XRPC_SENDER_IN_ALLOC,
      XSIGNALHEADERTYPE)
    SIGNAL_ALLOC_ERROR
    XBETWEEN_SYMBOLS(4, 482)

/*-----
* Implicit CALL (RPC) oppp
------*/
#ifdef XCASELABELS
  case 4:
#endif
    ALLOC_PROCEDURE(z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      yPrdN_z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      sizeof(yVDef_z_MainApplicationPackage_T0O0_exported_procedure_oppp))
    PROCEDURE_ALLOC_ERROR
    CALL_PROCEDURE(z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      yPrdN_z_MainApplicationPackage_T0O0_exported_procedure_oppp, 0, 2)
    PROCEDURE_ALLOC_ERROR_END
    XBETWEEN_SYMBOLS(2, 497)

/*-----
* Implicit OUTPUT pREPLY_oppp
------*/
#ifdef XCASEAFTERPRDLABELS
  case 2:
#endif
    SDL_2OUTPUT_RPC_REPLY(xDefaultPrioSignal, (xIdNode *)0, pREPLY_oppp,
      ySigN_pREPLY_z_MainApplicationPackage_I0_oppp, XRPC_SENDER_IN_OUTPUT, 0,
      "pREPLY_oppp")
    SIGNAL_ALLOC_ERROR_END
    XBETWEEN_SYMBOLS(5, 509)

/*-----
* Implicit NEXTSTATE -
------*/
#ifdef XCASELABELS
  case 5:
#endif
    SDL_DASH_NEXTSTATE
  default : return;
  }
}
static XCONST xInputAction yStaH_z_MainApplicationPackage_T0_Asterisk[] =
  {xInput, xDiscard};
static XCONST XINPUTREFTYPE yStaI_z_MainApplicationPackage_T0_Asterisk[] = {1,
  0};
#ifdef XCOVERAGE
static long int yStaC_z_MainApplicationPackage_T0_Asterisk[1+1];
#endif
XCONST struct xStateIdStruct yStaR_z_MainApplicationPackage_T0_Asterisk =
  {xStateEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrsR_z_MainApplicationPackage_T0_OS, "" xIdNumber(0)
  XCOMMON_EXTRAS, -1, yStaH_z_MainApplicationPackage_T0_Asterisk,
   yStaI_z_MainApplicationPackage_T0_Asterisk, 0, 0,
  0 xCoverage(yStaC_z_MainApplicationPackage_T0_Asterisk), (xStateIdNode)0
  xBreakB("") XSTA_EXTRAS};

/*****
* STATE wait_for_calls
* <<PACKAGE MainApplicationPackage/PROCESS TYPE OS>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,15)")
******/
static XCONST xInputAction yStaH_z_MainApplicationPackage_T0E0_wait_for_calls[] =
  {xInput, xDiscard};
static XCONST XINPUTREFTYPE yStaI_z_MainApplicationPackage_T0E0_wait_for_calls[] = {1,
  0};
#ifdef XCOVERAGE
static long int yStaC_z_MainApplicationPackage_T0E0_wait_for_calls[1+1];
#endif
XCONST struct xStateIdStruct yStaR_z_MainApplicationPackage_T0E0_wait_for_calls =
  {xStateEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrsR_z_MainApplicationPackage_T0_OS, "wait_for_calls" xIdNumber(0)
  XCOMMON_EXTRAS, z_MainApplicationPackage_T0E0_wait_for_calls,
  yStaH_z_MainApplicationPackage_T0E0_wait_for_calls,
  yStaI_z_MainApplicationPackage_T0E0_wait_for_calls, 0, 0, 0
  xCoverage(yStaC_z_MainApplicationPackage_T0E0_wait_for_calls),
  (xStateIdNode)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m3INILyJJYSLx3akAE1Wqy8E|pos(1,15)\")")
  XSTA_EXTRAS};

/*****
* PROCEDURE oppp
* <<PACKAGE MainApplicationPackage/PROCESS TYPE OS>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,36)")
******/
#ifdef XCOVERAGE
long int yPrdC_z_MainApplicationPackage_T0O0_exported_procedure_oppp[ySym_z_MainApplicationPackage_T0O0_exported_procedure_oppp+1];
#endif
static XCONST xStateIdNode yPrdT_z_MainApplicationPackage_T0O0_exported_procedure_oppp[] =
  {&xStartStateIdRec, &yStaR_z_MainApplicationPackage_T0O0E0_cc};
static xPrdNode yPrdA_z_MainApplicationPackage_T0O0_exported_procedure_oppp = (xPrdNode)0;
XCONST struct xPrdIdStruct yPrdR_z_MainApplicationPackage_T0O0_exported_procedure_oppp =
  {xProcedureEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrsR_z_MainApplicationPackage_T0_OS, "oppp" xIdNumber(0)
  XCOMMON_EXTRAS, yPrdT_z_MainApplicationPackage_T0O0_exported_procedure_oppp,
  yPrsS_z_MainApplicationPackage_T0_OS,
  z_MainApplicationPackage_T0O0_exported_procedure_oppp,
  yFree_z_MainApplicationPackage_T0O0_exported_procedure_oppp,
  (xptrint)sizeof(yVDef_z_MainApplicationPackage_T0O0_exported_procedure_oppp),
  &yPrdA_z_MainApplicationPackage_T0O0_exported_procedure_oppp
  xBreakB(yRef_z_MainApplicationPackage_T0O0_exported_procedure_oppp)
  xBreakB(ySym_z_MainApplicationPackage_T0O0_exported_procedure_oppp)
  xBreakB(1)
  xCoverage(yPrdC_z_MainApplicationPackage_T0O0_exported_procedure_oppp),
  (xPrdIdNode)0, (xPrdIdNode *)0 XPRD_EXTRAS};
void yFree_z_MainApplicationPackage_T0O0_exported_procedure_oppp(void *yVarP)
{
}

/*+++++
* GR ref function for procedure oppp
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,78)")
++++++*/
#ifdef XBREAKBEFORE
char * yRef_z_MainApplicationPackage_T0O0_exported_procedure_oppp (int SymbolNo, xSymbolType *SymbolType)
{
  switch (SymbolNo) {
    case 0: *SymbolType = xsStart;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#m4PiwIZ*38vLjWskgLCr6zOL|pos(1,13)\")";
    case 1: *SymbolType = xspCALLInput;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 2: *SymbolType = xspREPLYOutput;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 3: *SymbolType = xsNextstate;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#hMh3UIt4xiDL0YZhfVaIUqIE|pos(1,17)\")";
    case 4: *SymbolType = xspCALLProcedureCall;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    case 5: *SymbolType = xspCALLNextstate;
      return "#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,9)\")";
    default : *SymbolType = xsNoSuchSymbolType; return "";
  }
}
#endif

/*+++++
* Function for procedure oppp
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,78)")
++++++*/
YPRD_FUNCTION(z_MainApplicationPackage_T0O0_exported_procedure_oppp)
{
  YPAD_YSVARP
  YPRD_YVARP(yVDef_z_MainApplicationPackage_T0_OS)
  yVDef_z_MainApplicationPackage_T0O0_exported_procedure_oppp * yPrdVarP;
  YPRD_TEMP_VARS
  YPRDNAME_VAR("oppp")
    yPrdVarP =
    (yVDef_z_MainApplicationPackage_T0O0_exported_procedure_oppp *)xGetActivePrd((xPrsNode)yVarP);

  LOOP_LABEL_PRD
  switch (yPrdVarP->RestartAddress) {

/* ----- START ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#m4PiwIZ*38vLjWskgLCr6zOL|pos(1,13)") */
  case 0:
    XAT_FIRST_SYMBOL(0)
    XBETWEEN_SYMBOLS_PRD(3, 634)

/* ----- NEXTSTATE cc ----- */
/* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#hMh3UIt4xiDL0YZhfVaIUqIE|pos(1,17)") */
#ifdef XCASELABELS
  case 3:
#endif
    XAT_LAST_SYMBOL
    SDL_NEXTSTATE_PRD(cc, z_MainApplicationPackage_T0O0E0_cc, "cc")

/*-----
* Implicit INPUT pCALL_oppp
------*/
  case 1:
    XAT_FIRST_SYMBOL(1)
    XOS_TRACE_INPUT("pCALL_oppp")
    XRPC_SAVE_SENDER_PRD
    ALLOC_REPLY_SIGNAL_PRD(pREPLY_oppp,
      ySigN_pREPLY_z_MainApplicationPackage_I0_oppp, XRPC_SENDER_IN_ALLOC_PRD,
      XSIGNALHEADERTYPE)
    SIGNAL_ALLOC_ERROR
    XBETWEEN_SYMBOLS_PRD(4, 655)

/*-----
* Implicit CALL (RPC) oppp
------*/
#ifdef XCASELABELS
  case 4:
#endif
    ALLOC_PROCEDURE(z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      yPrdN_z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      sizeof(yVDef_z_MainApplicationPackage_T0O0_exported_procedure_oppp))
    PROCEDURE_ALLOC_ERROR
    CALL_PROCEDURE_IN_PRD(z_MainApplicationPackage_T0O0_exported_procedure_oppp,
      yPrdN_z_MainApplicationPackage_T0O0_exported_procedure_oppp, 0, 2)
    PROCEDURE_ALLOC_ERROR_END
    XBETWEEN_SYMBOLS_PRD(2, 670)

/*-----
* Implicit OUTPUT pREPLY_oppp
------*/
#ifdef XCASEAFTERPRDLABELS
  case 2:
#endif
    SDL_2OUTPUT_RPC_REPLY_PRD(xDefaultPrioSignal, (xIdNode *)0, pREPLY_oppp,
      ySigN_pREPLY_z_MainApplicationPackage_I0_oppp, XRPC_SENDER_IN_OUTPUT_PRD,
      0, "pREPLY_oppp")
    SIGNAL_ALLOC_ERROR_END
    XBETWEEN_SYMBOLS_PRD(5, 682)

/*-----
* Implicit NEXTSTATE -
------*/
#ifdef XCASELABELS
  case 5:
#endif
    SDL_DASH_NEXTSTATE_PRD
  }
  XEND_PRD
}

/*****
* STATE cc
* <<PACKAGE MainApplicationPackage/PROCESS TYPE OS
*     /PROCEDURE oppp>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#pGZKCIFXr5DL4eifbLJFQWwL|pos(1,19)")
******/
static XCONST xInputAction yStaH_z_MainApplicationPackage_T0O0E0_cc[] =
  {xInput, xDiscard};
static XCONST XINPUTREFTYPE yStaI_z_MainApplicationPackage_T0O0E0_cc[] = {1, 0};
#ifdef XCOVERAGE
static long int yStaC_z_MainApplicationPackage_T0O0E0_cc[1+1];
#endif
XCONST struct xStateIdStruct yStaR_z_MainApplicationPackage_T0O0E0_cc =
  {xStateEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPrdR_z_MainApplicationPackage_T0O0_exported_procedure_oppp,
  "cc" xIdNumber(0) XCOMMON_EXTRAS, z_MainApplicationPackage_T0O0E0_cc,
  yStaH_z_MainApplicationPackage_T0O0E0_cc,
  yStaI_z_MainApplicationPackage_T0O0E0_cc, 0, 0, 0
  xCoverage(yStaC_z_MainApplicationPackage_T0O0E0_cc), (xStateIdNode)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#pGZKCIFXr5DL4eifbLJFQWwL|pos(1,19)\")")
  XSTA_EXTRAS};

/*****
* REMOTE PROCEDURE oppp
* <<PACKAGE MainApplicationPackage>>
* #SDTREF(U2,"u2:C:\Users\evgeny\Documents\My Projects\OS_model\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,22)")
******/
struct xRemotePrdIdStruct yRePR_z_MainApplicationPackage_I0_oppp =
  {xRemotePrdEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage,
  "oppp" xIdNumber(0) XCOMMON_EXTRAS, 0};
XCONST struct xSignalIdStruct ySigR_pCALL_z_MainApplicationPackage_I0_oppp =
  {xRPCSignalEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage,
  "pCALL_oppp" xIdNumber(0) XCOMMON_EXTRAS, (xptrint)sizeof(XSIGNALHEADERTYPE),
  0, 0 xFreS(0) SIGCODE(SN_pCALL_oppp)
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,22)\")")
  xSigPrioPar(xDefaultPrioSignal) ZERO_OFFSET XSIG_EXTRAS};
XCONST struct xSignalIdStruct ySigR_pREPLY_z_MainApplicationPackage_I0_oppp =
  {xRPCSignalEC , (xIdNode)0, (xIdNode)0,
  (xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage,
  "pREPLY_oppp" xIdNumber(0) XCOMMON_EXTRAS,
  (xptrint)sizeof(XSIGNALHEADERTYPE), 0, 0 xFreS(0) SIGCODE(SN_pREPLY_oppp)
  xBreakB("#SDTREF(U2,\"u2:C:\\Users\\evgeny\\Documents\\My Projects\\OS_model\\MainApplication.u2#yW*q7EFQmOBLMGOfKVXZ0gPV|pos(1,22)\")")
  xSigPrioPar(xDefaultPrioSignal) ZERO_OFFSET XSIG_EXTRAS};

/*************************************************************************
**                       SECTION Initialization                         **
*************************************************************************/
void yInit_MainApplicationPackage (void)
{
  static int IsCalled = 0;
  int  Temp;
  YINIT_TEMP_VARS
  if (IsCalled) {
    return;
  }
  IsCalled = 1;
  xInsertIdNode((xIdNode)&yPacR_z_MainApplicationPackage__MainApplicationPackage);
  yInit_U2ExtraOps();
  yInit_U2ctypes();
  xInsertIdNode((xIdNode)&yBloR_z_MainApplicationPackage_Z0_Main);
  xInsertIdNode((xIdNode)&yPrsR_z_MainApplicationPackage_Z0T0_implicit_process_0);
  xInsertIdNode((xIdNode)&ySigR_z_MainApplicationPackage_Z0T0_implicit_process_0);
  xInsertIdNode((xIdNode)&yPrdR_z_MainApplicationPackage_Z0T0O0_op);
  xInsertIdNode((xIdNode)&yStaR_z_MainApplicationPackage_Z0T0E0_st);
  xInsertIdNode((xIdNode)&yPrsR_z_MainApplicationPackage_T0_OS);
  xInsertIdNode((xIdNode)&ySigR_z_MainApplicationPackage_T0_OS);
  xInsertIdNode((xIdNode)&yPrdR_z_MainApplicationPackage_T0O0_exported_procedure_oppp);
  xInsertIdNode((xIdNode)&yStaR_z_MainApplicationPackage_T0O0E0_cc);
  xInsertIdNode((xIdNode)&yStaR_z_MainApplicationPackage_T0E0_wait_for_calls);
  xInsertIdNode((xIdNode)&yRePR_z_MainApplicationPackage_I0_oppp);
  xInsertIdNode((xIdNode)&ySigR_pCALL_z_MainApplicationPackage_I0_oppp);
  xInsertIdNode((xIdNode)&ySigR_pREPLY_z_MainApplicationPackage_I0_oppp);
}
