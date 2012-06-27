# makefile for System: Class1

sctAUTOCFGDEP =
sctASN1AUTOCFGDEP =
sctCOMPFLAGS = -DXUSE_GENERIC_FUNC

!include $(SCTDIR)\make.opt

default: Class1$(sctEXTENSION)

Class1$(sctEXTENSION): \
  Class1$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  osek$(sctOEXTENSION) \
  $(sctLINKKERNELDEP) \
  $(sctLINKCODERLIBDEP)
	$(sctLD) @<<
	$(sctLDFLAGS)
	 Class1$(sctOEXTENSION) U2ctypes$(sctOEXTENSION) U2ExtraOps$(sctOEXTENSION) osek$(sctOEXTENSION) $(sctLINKKERNEL) $(sctLINKCODERLIB)
	/OUT:Class1$(sctEXTENSION)
<<

Class1$(sctOEXTENSION): \
  Class1.c \
  U2ctypes.h \
  U2ExtraOps.h \
  U2ctypes.h \
  U2ExtraOps.h \
  osek.h \
  osek.h \
  U2ctypes.h \
  U2ExtraOps.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoClass1$(sctOEXTENSION)
	Class1.c
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

clean: clean_gen_objs clean_kernel_objs

clean_gen_objs:
	$(sctRM) \
  Class1$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  osek$(sctOEXTENSION) \
  Class1$(sctEXTENSION)
