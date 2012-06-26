# makefile for System: Main

sctAUTOCFGDEP =
sctASN1AUTOCFGDEP =
sctCOMPFLAGS = -DXUSE_GENERIC_FUNC

!include $(SCTDIR)\make.opt

default: Main$(sctEXTENSION)

Main$(sctEXTENSION): \
  Main$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  MainApplicationPackage$(sctOEXTENSION) \
  $(sctLINKKERNELDEP) \
  $(sctLINKCODERLIBDEP)
	$(sctLD) @<<
	$(sctLDFLAGS)
	 Main$(sctOEXTENSION) U2ctypes$(sctOEXTENSION) U2ExtraOps$(sctOEXTENSION) MainApplicationPackage$(sctOEXTENSION) $(sctLINKKERNEL) $(sctLINKCODERLIB)
	/OUT:Main$(sctEXTENSION)
<<

Main$(sctOEXTENSION): \
  Main.c \
  U2ctypes.h \
  U2ExtraOps.h \
  U2ctypes.h \
  U2ExtraOps.h \
  MainApplicationPackage.h \
  MainApplicationPackage.h \
  U2ctypes.h \
  U2ExtraOps.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoMain$(sctOEXTENSION)
	Main.c
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

MainApplicationPackage$(sctOEXTENSION): \
  MainApplicationPackage.c \
  MainApplicationPackage.h
	$(sctCC) @<<
	$(sctCPPFLAGS) $(sctCCFLAGS)
	$(sctIFDEF)
	/FoMainApplicationPackage$(sctOEXTENSION)
	MainApplicationPackage.c
<<NOKEEP

clean: clean_gen_objs clean_kernel_objs

clean_gen_objs:
	$(sctRM) \
  Main$(sctOEXTENSION) \
  U2ctypes$(sctOEXTENSION) \
  U2ExtraOps$(sctOEXTENSION) \
  MainApplicationPackage$(sctOEXTENSION) \
  Main$(sctEXTENSION)
