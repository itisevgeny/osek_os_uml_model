
/* Program generated by Cbasic 4.3.0.0.13660 */
#define XSCT_CBASIC

#ifndef XX_osek_H
#define XX_osek_H

/*************************************************************************
**                SECTION Types and Forward references                  **
*************************************************************************/

/*****
* PACKAGE osek
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#qncAcEy-gblLR3IYQLtk1RJE|pos(1,9)")
******/
extern XCONST struct xPackageIdStruct yPacR_z_osek__osek;

extern void yInit_osek (void);

/*****
* PROCESS TYPE Class1
* <<PACKAGE osek>>
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#mhocSLnd7cSLV0eY7EFyCJ7I|pos(1,18)")
******/
extern XCONST XSIGTYPE yPrsS_z_osek_T0_Class1[];
extern XCONST xStateIdNode yPrsT_z_osek_T0_Class1[];
extern XCONST struct xPrsIdStruct yPrsR_z_osek_T0_Class1;
#define yPrsN_z_osek_T0_Class1  (&yPrsR_z_osek_T0_Class1)
#ifdef XCOVERAGE
extern long int yPrsC_z_osek_T0_Class1[];
#endif
YPAD_PROTOTYPE(yPAD_z_osek_T0_Class1)
extern XCONST struct xSignalIdStruct ySigR_z_osek_T0_Class1;
#define ySigN_z_osek_T0_Class1  (&ySigR_z_osek_T0_Class1)
typedef struct {
    SIGNAL_VARS
    STARTUP_VARS
} ySignalPar_z_osek_T0_Class1;
typedef ySignalPar_z_osek_T0_Class1  *yPDP_z_osek_T0_Class1;
XPROCESSDEF_H(Class1,"Class1",z_osek_T0_Class1,yPAD_z_osek_T0_Class1, \
  yVDef_z_osek_T0_Class1)
#define yChaE_z_osek_T0G0_implicit_port_0  0
#ifdef XBREAKBEFORE
#define ySym_z_osek_T0_Class1  5
extern char * yRef_z_osek_T0_Class1 (int, xSymbolType *);
#endif
typedef struct {
  PROCESS_VARS
} yVDef_z_osek_T0_Class1;
typedef yVDef_z_osek_T0_Class1  *yVDP_z_osek_T0_Class1;
extern void yFree_z_osek_T0_Class1 (void *);
extern void yIni_z_osek_T0_Class1 (xPrsNode);

extern XCONST struct xStateIdStruct yStaR_z_osek_T0_Asterisk;
#define yStaN_z_osek_T0_Asterisk  (&yStaR_z_osek_T0_Asterisk)

/*****
* PROCEDURE response
* <<PACKAGE osek/PROCESS TYPE Class1>>
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#SjuwFEQJ9kiLSb0ZYIGEp3qV|pos(1,40)")
******/
YPRD_PROTOTYPE(z_osek_T0O0_exported_procedure_response)
extern XCONST struct xPrdIdStruct yPrdR_z_osek_T0O0_exported_procedure_response;
#define yPrdN_z_osek_T0O0_exported_procedure_response  (&yPrdR_z_osek_T0O0_exported_procedure_response)
#ifdef XBREAKBEFORE
#define ySym_z_osek_T0O0_exported_procedure_response  5
extern char * yRef_z_osek_T0O0_exported_procedure_response (int, xSymbolType *);
#endif
typedef struct {
  PROCEDURE_VARS
} yVDef_z_osek_T0O0_exported_procedure_response;
typedef yVDef_z_osek_T0O0_exported_procedure_response  *yVDP_z_osek_T0O0_exported_procedure_response;
extern void yFree_z_osek_T0O0_exported_procedure_response (void *);

/*****
* STATE w
* <<PACKAGE osek/PROCESS TYPE Class1/PROCEDURE response>>
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#hdpcUVaVgrALkG8aHVLtzR1V|pos(1,19)")
******/
#define z_osek_T0O0E0_w  1
extern XCONST struct xStateIdStruct yStaR_z_osek_T0O0E0_w;
#define yStaN_z_osek_T0O0E0_w  (&yStaR_z_osek_T0O0E0_w)

/*****
* STATE waiting
* <<PACKAGE osek/PROCESS TYPE Class1>>
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#KoCcuLAQ6dDLIXvjwEHVlnoL|pos(1,15)")
******/
#define z_osek_T0E0_waiting  1
extern XCONST struct xStateIdStruct yStaR_z_osek_T0E0_waiting;
#define yStaN_z_osek_T0E0_waiting  (&yStaR_z_osek_T0E0_waiting)

/*****
* REMOTE PROCEDURE response
* <<PACKAGE osek>>
* #SDTREF(U2,"u2:C:\Documents and Settings\Other\��� ���������\My Projects\OSEK\osek.u2#SjuwFEQJ9kiLSb0ZYIGEp3qV|pos(1,22)")
******/
extern struct xRemotePrdIdStruct yRePR_z_osek_I0_response;
extern XCONST struct xSignalIdStruct ySigR_pCALL_z_osek_I0_response;
extern XCONST struct xSignalIdStruct ySigR_pREPLY_z_osek_I0_response;
#define ySigN_pCALL_z_osek_I0_response  (&ySigR_pCALL_z_osek_I0_response)
#define ySigN_pREPLY_z_osek_I0_response  (&ySigR_pREPLY_z_osek_I0_response)

/*************************************************************************
**                #CODE directives, #HEADING sections                   **
*************************************************************************/
#endif
