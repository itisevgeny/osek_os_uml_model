
/* Program generated by Cbasic 4.3.0.0.13660 */
#define XSCT_CBASIC

#define C_TRANSLATOR_4_1
#define XENABLE_VERSION_CHECK

#include "scttypes.h"
#include "U2ExtraOps.h"
#include "U2ctypes.h"
#include "osek.h"
#ifdef XUSE_SIGNAL_NUMBERS
#include "Class1.hs"
#endif
XSYSTEMVARS
#ifdef XCTRACE
static char  xFileName[] = "Class1.c";
#endif

/*************************************************************************
**                SECTION Types and Forward references                  **
*************************************************************************/

/*****
* PROCESS INST Class1
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#mhocSLnd7cSLV0eY7EFyCJ7I|pos(1,8)")
******/
extern XCONST struct xPrsIdStruct yPrsR_z_Class1;
#define yPrsN_z_Class1  (&yPrsR_z_Class1)
#ifndef XOPTCHAN
extern XCONST xIdNode yPrsO_z_Class1[];
#endif

/*************************************************************************
**                  SECTION Variables and Functions                     **
*************************************************************************/

/*****
* ENV
******/
#ifndef XMULTIPLESYSTEMS
#ifndef XOPTCHAN
xIdNode yEnvO_env[] = {(xIdNode)0  XTRACHANNELLIST};
#endif
#endif

/*****
* PROCESS INST Class1
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#mhocSLnd7cSLV0eY7EFyCJ7I|pos(1,8)")
******/
static XPRSNODE yPrsB_z_Class1 = (XPRSNODE)0;
XCONST struct xPrsIdStruct yPrsR_z_Class1 = {xProcessEC , (xIdNode)0,
  (xIdNode)0, (xIdNode)&xSymbolTableIdRec, "Class1" xIdNumber(0)
  XCOMMON_EXTRAS, yPrsT_z_osek_T0_Class1, yPrsS_z_osek_T0_Class1 xOptChan(
  yPrsO_z_Class1), 0, -1 xNrInst(1), 1, &yPrsB_z_Class1,
  (xptrint)sizeof(yVDef_z_osek_T0_Class1) xPrsPrioPar(xDefaultPrioProcess),
  (XPRSNODE *)0 xTrace(-1) xGRTrace(-1) xBreakB(yRef_z_osek_T0_Class1)
  xBreakB(ySym_z_osek_T0_Class1) xBreakB(0) xMSCETrace(-1)
  xCoverage(yPrsC_z_osek_T0_Class1) xCoverage(0) xCoverage(0), 0, 0, 0,
  &yPrsR_z_osek_T0_Class1, (xPrdIdNode *)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Documents and Settings\\Other\\��� ���������\\My Projects\\OSEK\\osek.u2#mhocSLnd7cSLV0eY7EFyCJ7I|pos(1,8)\")")
  xThreadName(0) xThreadName(0) XPRS_EXTRAS(z_osek_T0_Class1)};
#ifndef XOPTCHAN
XCONST xIdNode yPrsO_z_Class1[] = {(xIdNode)0};
#endif

/*************************************************************************
**                       SECTION Initialization                         **
*************************************************************************/
#ifndef XMULTIPLESYSTEMS
void yInit (void)
{
#else
void yInit_Class1 (void)
{
#endif
  int  Temp;
  YINIT_TEMP_VARS
  BEGIN_YINIT

#ifdef XMONITOR
  xTranslatorVersion =
    "Program generated by Cbasic 4.3.0.0.13660";
#endif
  yInit_U2ExtraOps();
  yInit_U2ctypes();
  yInit_osek();
  xInsertIdNode((xIdNode)&yPrsR_z_Class1);
}
