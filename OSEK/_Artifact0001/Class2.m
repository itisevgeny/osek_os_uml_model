# makefile for System: Class2

sctAUTOCFGDEP =
sctASN1AUTOCFGDEP =
sctCOMPFLAGS = -DXUSE_GENERIC_FUNC

!include $(SCTDIR)\make.opt

default: Class2$(sctEXTENSION)

Class2$(sctEXTENSION): \
  Class2$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  osek$(sctOEXTENSION) \
  App$(sctOEXTENSION) \
  $(sctLINKKERNELDEP) \
  $(sctLINKCODERLIBDEP)
	$(sctLD) @<<
	$(sctLDFLAGS)
	 Class2$(sctOEXTENSION) U2ctypes$(sctOEXTENSION) U2ExtraOps$(sctOEXTENSION) osek$(sctOEXTENSION) App$(sctOEXTENSION) $(sctLINKKERNEL) $(sctLINKCODERLIB)
	/OUT:Class2$(sctEXTENSION)
<<

Class2$(sctOEXTENSION): \
  Class2.c \
  U2ctypes.h \
  U2ExtraOps.h \
  U2ctypes.h \
  U2ExtraOps.h \
  osek.h \
  osek.h \
  U2ctypes.h \
  U2ExtraOps.h \
  App.h \
  App.h \
  osek.h \
  U2ctypes.h \
  U2ExtraOps.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoClass2$(sctOEXTENSION)
	Class2.c
<<NOKEEP

U2ctypes$(sctOEXTENSION): \
  U2ctypes.c \
  U2ctypes.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoU2ctypes$(sctOEXTENSION)
	U2ctypes.c
<<NOKEEP

U2ExtraOps$(sctOEXTENSION): \
  U2ExtraOps.c \
  U2ExtraOps.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoU2ExtraOps$(sctOEXTENSION)
	U2ExtraOps.c
<<NOKEEP

osek$(sctOEXTENSION): \
  osek.c \
  osek.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/Foosek$(sctOEXTENSION)
	osek.c
<<NOKEEP

App$(sctOEXTENSION): \
  App.c \
  App.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoApp$(sctOEXTENSION)
	App.c
<<NOKEEP

clean: clean_gen_objs clean_kernel_objs

clean_gen_objs:
	$(sctRM) \
  Class2$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  osek$(sctOEXTENSION) \
  App$(sctOEXTENSION) \
  Class2$(sctEXTENSION)
