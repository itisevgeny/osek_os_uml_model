
/* Program generated by Cbasic 4.3.0.0.13660 */
#define XSCT_CBASIC

#define C_TRANSLATOR_4_1
#define XENABLE_VERSION_CHECK

#include "scttypes.h"
#include "U2ExtraOps.h"
#include "U2ctypes.h"
#include "osek.h"
#include "App.h"
#ifdef XUSE_SIGNAL_NUMBERS
#include "Class2.hs"
#endif
XSYSTEMVARS
#ifdef XCTRACE
static char  xFileName[] = "Class2.c";
#endif

/*************************************************************************
**                SECTION Types and Forward references                  **
*************************************************************************/

/*****
* PROCESS INST Class2
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#7rdrCLGQK1CLhXJZSLqRIG-V|pos(1,8)")
******/
extern XCONST struct xPrsIdStruct yPrsR_z_Class2;
#define yPrsN_z_Class2  (&yPrsR_z_Class2)
#ifndef XOPTCHAN
extern XCONST xIdNode yPrsO_z_Class2[];
#endif

/*****
* GATE @implicit_port_1
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#rJ58mLKBK-DLZd36bIm1ePGE|pos(1,14)")
******/
#ifndef XOPTCHAN
extern XCONST xIdNode yChaO_z0_implicit_port_1[];
extern XCONST xIdNode yChaOR_z0_implicit_port_1[];
extern XCONST struct xChannelIdStruct yChaR_z0_implicit_port_1;
extern XCONST struct xChannelIdStruct yChaRR_z0_implicit_port_1;
#define yChaN_z0_implicit_port_1  (&yChaR_z0_implicit_port_1)
#endif

/*************************************************************************
**                  SECTION Variables and Functions                     **
*************************************************************************/

/*****
* ENV
******/
#ifndef XMULTIPLESYSTEMS
#ifndef XOPTCHAN
xIdNode yEnvO_env[] = {(xIdNode)&yChaR_z0_implicit_port_1,
  (xIdNode)0  XTRACHANNELLIST};
#endif
#endif

/*****
* PROCESS INST Class2
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#7rdrCLGQK1CLhXJZSLqRIG-V|pos(1,8)")
******/
static XPRSNODE yPrsB_z_Class2 = (XPRSNODE)0;
XCONST struct xPrsIdStruct yPrsR_z_Class2 = {xProcessEC , (xIdNode)0,
  (xIdNode)0, (xIdNode)&xSymbolTableIdRec, "Class2" xIdNumber(0)
  XCOMMON_EXTRAS, yPrsT_z_App_T0_Class2, yPrsS_z_App_T0_Class2 xOptChan(
  yPrsO_z_Class2), 0, -1 xNrInst(1), 1, &yPrsB_z_Class2,
  (xptrint)sizeof(yVDef_z_App_T0_Class2) xPrsPrioPar(xDefaultPrioProcess),
  (XPRSNODE *)0 xTrace(-1) xGRTrace(-1) xBreakB(yRef_z_App_T0_Class2)
  xBreakB(ySym_z_App_T0_Class2) xBreakB(0) xMSCETrace(-1)
  xCoverage(yPrsC_z_App_T0_Class2) xCoverage(0) xCoverage(0), 0, 0, 0,
  &yPrsR_z_App_T0_Class2, (xPrdIdNode *)0
  xBreakB("#SDTREF(U2,\"u2:C:\\Documents and Settings\\Other\\��� ���������\\My Projects\\OSEK\\osek.u2#7rdrCLGQK1CLhXJZSLqRIG-V|pos(1,8)\")")
  xThreadName(0) xThreadName(0) XPRS_EXTRAS(z_App_T0_Class2)};
#ifndef XOPTCHAN
XCONST xIdNode yPrsO_z_Class2[] = {(xIdNode)&yChaRR_z0_implicit_port_1,
  (xIdNode)0};
#endif

/*****
* GATE @implicit_port_1
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#rJ58mLKBK-DLZd36bIm1ePGE|pos(1,14)")
******/
#ifndef XOPTCHAN
static XCONST XSIGTYPE yChaS_z0_implicit_port_1[] =
  {SIGNAL_NAME(pREPLY_response, &ySigR_pREPLY_z_osek_I0_response), (XSIGTYPE)0};
static XCONST XSIGTYPE yChaSR_z0_implicit_port_1[] =
  {SIGNAL_NAME(pCALL_response, &ySigR_pCALL_z_osek_I0_response), (XSIGTYPE)0};
XCONST xIdNode yChaO_z0_implicit_port_1[] = {(xIdNode)&yPrsR_z_Class2,
  (xIdNode)0};
XCONST xIdNode yChaOR_z0_implicit_port_1[] = {(xIdNode)&yEnvR_env, (xIdNode)0};
XCONST struct xChannelIdStruct yChaR_z0_implicit_port_1 = {xGateEC ,
  (xIdNode)0, (xIdNode)0, (xIdNode)&yPrsR_z_Class2,
  "@implicit_port_1" xIdNumber(0) XCOMMON_EXTRAS, yChaS_z0_implicit_port_1,
  yChaO_z0_implicit_port_1, &yChaRR_z0_implicit_port_1 XCHA_EXTRAS};
XCONST struct xChannelIdStruct yChaRR_z0_implicit_port_1 = {xGateEC ,
  (xIdNode)0, (xIdNode)0, (xIdNode)&yPrsR_z_Class2,
  "@implicit_port_1" xIdNumber(0) XCOMMON_EXTRAS, yChaSR_z0_implicit_port_1,
  yChaOR_z0_implicit_port_1, &yChaR_z0_implicit_port_1 XCHA_EXTRAS};
#endif

/*************************************************************************
**                       SECTION Initialization                         **
*************************************************************************/
#ifndef XMULTIPLESYSTEMS
void yInit (void)
{
#else
void yInit_Class2 (void)
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
  yInit_App();
  xInsertIdNode((xIdNode)&yPrsR_z_Class2);
#ifndef XOPTCHAN
  xInsertIdNode((xIdNode)&yChaR_z0_implicit_port_1);
  xInsertIdNode((xIdNode)&yChaRR_z0_implicit_port_1);
#endif
}
