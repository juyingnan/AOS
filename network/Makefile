# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the network assignment
#    Defines set up assuming this assignment is done last 
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES = -DUSER_PROGRAM -DVM -DFILESYS_NEEDED -DFILESYS -DNETWORK
INCPATH = -I../network -I../bin -I../filesys -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H) $(NETWORK_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C) $(NETWORK_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O) $(NETWORK_O)

# bare bones version
# DEFINES =-DTHREADS -DNETWORK
# INCPATH = -I../network -I../threads -I../machine
# HFILES = $(THREAD_H) $(NETWORK_H)
# CFILES = $(THREAD_C) $(NETWORK_C)
# C_OFILES = $(THREAD_O) $(NETWORK_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
list.o: ../threads/list.cc ../threads/copyright.h ../threads/list.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h
scheduler.o: ../threads/scheduler.cc ../threads/copyright.h \
 ../threads/scheduler.h ../threads/list.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../machine/timer.h ../threads/system.h ../threads/threadmanager.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/synch.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h
synch.o: ../threads/synch.cc ../threads/copyright.h ../threads/synch.h \
 ../threads/thread.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/machine.h ../threads/utility.h \
 ../machine/TLBManager.h ../machine/translate.h ../vm/SwappingStrategy.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../machine/translate.h ../threads/tid.h ../threads/list.h \
 ../threads/system.h ../threads/scheduler.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h
synchlist.o: ../threads/synchlist.cc ../threads/copyright.h \
 ../threads/synchlist.h ../threads/list.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h
system.o: ../threads/system.cc ../threads/copyright.h ../threads/system.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
tid.o: ../threads/tid.cc ../threads/tid.h ../userprog/bitmap.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../filesys/openfile.h
ts.o: ../threads/ts.cc ../threads/ts.h ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
thread.o: ../threads/thread.cc ../threads/copyright.h ../threads/thread.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/machine.h ../threads/utility.h \
 ../machine/TLBManager.h ../machine/translate.h ../vm/SwappingStrategy.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../machine/translate.h ../threads/tid.h ../threads/switch.h \
 ../threads/synch.h ../threads/list.h ../threads/system.h \
 ../threads/scheduler.h ../machine/timer.h ../threads/threadmanager.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
threadmanager.o: ../threads/threadmanager.cc ../threads/threadmanager.h \
 ../threads/copyright.h ../threads/list.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h
utility.o: ../threads/utility.cc ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/copyright.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/stdarg.h
threadtest.o: ../threads/threadtest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../threads/ts.h
interrupt.o: ../machine/interrupt.cc ../threads/copyright.h \
 ../machine/interrupt.h ../threads/list.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/system.h ../threads/thread.h \
 ../machine/machine.h ../threads/utility.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
sysdep.o: ../machine/sysdep.cc ../threads/copyright.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h /usr/include/signal.h \
 /usr/include/i386-linux-gnu/bits/sigset.h \
 /usr/include/i386-linux-gnu/bits/signum.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/siginfo.h \
 /usr/include/i386-linux-gnu/bits/sigaction.h \
 /usr/include/i386-linux-gnu/bits/sigcontext.h \
 /usr/include/i386-linux-gnu/bits/sigstack.h \
 /usr/include/i386-linux-gnu/sys/ucontext.h \
 /usr/include/i386-linux-gnu/bits/pthreadtypes.h \
 /usr/include/i386-linux-gnu/bits/sigthread.h \
 /usr/include/i386-linux-gnu/sys/types.h /usr/include/endian.h \
 /usr/include/i386-linux-gnu/bits/endian.h \
 /usr/include/i386-linux-gnu/bits/byteswap.h \
 /usr/include/i386-linux-gnu/bits/byteswap-16.h \
 /usr/include/i386-linux-gnu/sys/select.h \
 /usr/include/i386-linux-gnu/bits/select.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/sys/sysmacros.h \
 /usr/include/i386-linux-gnu/sys/time.h \
 /usr/include/i386-linux-gnu/sys/socket.h \
 /usr/include/i386-linux-gnu/sys/uio.h \
 /usr/include/i386-linux-gnu/bits/uio.h \
 /usr/include/i386-linux-gnu/bits/socket.h \
 /usr/include/i386-linux-gnu/bits/socket_type.h \
 /usr/include/i386-linux-gnu/bits/sockaddr.h \
 /usr/include/i386-linux-gnu/asm/socket.h \
 /usr/include/asm-generic/socket.h \
 /usr/include/i386-linux-gnu/asm/sockios.h \
 /usr/include/asm-generic/sockios.h \
 /usr/include/i386-linux-gnu/sys/file.h /usr/include/fcntl.h \
 /usr/include/i386-linux-gnu/bits/fcntl.h \
 /usr/include/i386-linux-gnu/bits/fcntl-linux.h \
 /usr/include/i386-linux-gnu/bits/stat.h \
 /usr/include/i386-linux-gnu/sys/un.h \
 /usr/include/i386-linux-gnu/sys/mman.h \
 /usr/include/i386-linux-gnu/bits/mman.h /usr/include/unistd.h \
 /usr/include/i386-linux-gnu/bits/posix_opt.h \
 /usr/include/i386-linux-gnu/bits/environments.h \
 /usr/include/i386-linux-gnu/bits/confname.h /usr/include/getopt.h \
 /usr/include/errno.h /usr/include/i386-linux-gnu/bits/errno.h \
 /usr/include/linux/errno.h /usr/include/i386-linux-gnu/asm/errno.h \
 /usr/include/asm-generic/errno.h /usr/include/asm-generic/errno-base.h \
 ../machine/interrupt.h ../threads/list.h ../threads/copyright.h \
 ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
 ../threads/system.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../machine/stats.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/synch.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h
stats.o: ../machine/stats.cc ../threads/copyright.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/stats.h
timer.o: ../machine/timer.cc ../threads/copyright.h ../machine/timer.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
addrspace.o: ../userprog/addrspace.cc ../threads/copyright.h \
 ../threads/system.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../userprog/addrspace.h ../bin/noff.h
bitmap.o: ../userprog/bitmap.cc ../threads/copyright.h \
 ../userprog/bitmap.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../filesys/openfile.h
exception.o: ../userprog/exception.cc ../threads/copyright.h \
 ../threads/system.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../userprog/syscall.h
progtest.o: ../userprog/progtest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../machine/console.h ../userprog/addrspace.h
console.o: ../machine/console.cc ../threads/copyright.h \
 ../machine/console.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
machine.o: ../machine/machine.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
mipssim.o: ../machine/mipssim.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../machine/mipssim.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 ../machine/machine.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../machine/translate.h ../threads/tid.h ../threads/scheduler.h \
 ../threads/list.h ../machine/timer.h ../threads/threadmanager.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/synch.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h
translate.o: ../machine/translate.cc ../threads/copyright.h \
 ../machine/machine.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
TLBManager.o: ../machine/TLBManager.cc ../userprog/addrspace.h \
 ../threads/copyright.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../machine/translate.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../threads/tid.h ../threads/scheduler.h ../threads/list.h \
 ../machine/timer.h ../threads/threadmanager.h ../machine/interrupt.h \
 ../threads/list.h ../machine/stats.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h ../vm/SwappingLRU.h
VirtMemManager.o: ../vm/VirtMemManager.cc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
PhyMemManager.o: ../vm/PhyMemManager.cc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../vm/SwappingLRU.h
SwappingManager.o: ../vm/SwappingManager.cc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
MemoryManager.o: ../vm/MemoryManager.cc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../bin/noff.h ../threads/threadmanager.h \
 ../vm/MemoryManager.h
SwappingLRU.o: ../vm/SwappingLRU.cc ../threads/system.h \
 ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
 ../machine/sysdep.h ../threads/copyright.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../vm/SwappingLRU.h
directory.o: ../filesys/directory.cc ../threads/copyright.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../filesys/filehdr.h \
 ../machine/disk.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h ../filesys/inode.h \
 ../filesys/directory.h
filehdr.o: ../filesys/filehdr.cc ../threads/copyright.h \
 ../userprog/bitmap.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../filesys/openfile.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../machine/TLBManager.h ../machine/translate.h ../vm/SwappingStrategy.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../filesys/filehdr.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h ../filesys/inode.h \
 ../filesys/directory.h
filesys.o: ../filesys/filesys.cc ../threads/copyright.h ../machine/disk.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../filesys/directory.h ../filesys/openfile.h ../filesys/filehdr.h \
 /usr/include/time.h /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h ../filesys/inode.h \
 ../filesys/filesys.h
fstest.o: ../filesys/fstest.cc ../threads/copyright.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../machine/TLBManager.h ../machine/translate.h ../vm/SwappingStrategy.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../machine/translate.h ../threads/tid.h ../threads/scheduler.h \
 ../threads/list.h ../machine/timer.h ../threads/threadmanager.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/synch.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h \
 ../threads/thread.h
openfile.o: ../filesys/openfile.cc ../threads/copyright.h \
 ../filesys/filehdr.h ../machine/disk.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h ../filesys/inode.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../filesys/openfile.h \
 ../threads/system.h ../threads/utility.h ../threads/thread.h \
 ../machine/machine.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../threads/synch.h \
 ../network/post.h ../machine/network.h ../threads/synchlist.h \
 ../threads/synch.h ../vm/MemoryManager.h ../vm/VirtMemManager.h \
 ../vm/PhyMemManager.h ../vm/SwappingStrategy.h ../vm/SwappingManager.h
inode.o: ../filesys/inode.cc ../filesys/inode.h ../machine/disk.h \
 ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../userprog/bitmap.h ../filesys/openfile.h \
 ../filesys/openfile.h ../filesys/filehdr.h /usr/include/time.h \
 /usr/include/i386-linux-gnu/bits/time.h \
 /usr/include/i386-linux-gnu/bits/timex.h ../threads/system.h \
 ../threads/utility.h ../threads/thread.h ../machine/machine.h \
 ../machine/TLBManager.h ../machine/translate.h ../vm/SwappingStrategy.h \
 ../machine/disk.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../machine/translate.h ../threads/tid.h ../threads/scheduler.h \
 ../threads/list.h ../machine/timer.h ../threads/threadmanager.h \
 ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
 ../filesys/synchdisk.h ../threads/synch.h ../network/post.h \
 ../machine/network.h ../threads/synchlist.h ../threads/synch.h \
 ../vm/MemoryManager.h ../vm/VirtMemManager.h ../vm/PhyMemManager.h \
 ../vm/SwappingStrategy.h ../vm/SwappingManager.h
synchdisk.o: ../filesys/synchdisk.cc ../threads/copyright.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/utility.h \
 ../threads/copyright.h ../threads/bool.h ../machine/sysdep.h \
 /usr/include/stdio.h /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/synch.h ../threads/thread.h \
 ../threads/utility.h ../machine/machine.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../machine/disk.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../userprog/bitmap.h ../filesys/openfile.h ../machine/translate.h \
 ../threads/tid.h ../threads/list.h
disk.o: ../machine/disk.cc ../threads/copyright.h ../machine/disk.h \
 ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
 ../machine/sysdep.h /usr/include/stdio.h /usr/include/features.h \
 /usr/include/stdc-predef.h /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/system.h ../threads/utility.h \
 ../threads/thread.h ../machine/machine.h ../machine/TLBManager.h \
 ../machine/translate.h ../vm/SwappingStrategy.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
nettest.o: ../network/nettest.cc ../threads/copyright.h \
 ../threads/system.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h ../network/post.h
post.o: ../network/post.cc ../threads/copyright.h ../network/post.h \
 ../machine/network.h ../threads/utility.h ../threads/copyright.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/synchlist.h ../threads/list.h \
 ../threads/utility.h ../threads/synch.h ../threads/thread.h \
 ../machine/machine.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h
network.o: ../machine/network.cc ../threads/copyright.h \
 ../threads/system.h ../threads/copyright.h ../threads/utility.h \
 ../threads/bool.h ../machine/sysdep.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/stdc-predef.h \
 /usr/include/i386-linux-gnu/bits/predefs.h \
 /usr/include/i386-linux-gnu/sys/cdefs.h \
 /usr/include/i386-linux-gnu/bits/wordsize.h \
 /usr/include/i386-linux-gnu/gnu/stubs.h \
 /usr/include/i386-linux-gnu/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h \
 /usr/include/i386-linux-gnu/bits/types.h \
 /usr/include/i386-linux-gnu/bits/typesizes.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/wchar.h ../threads/stdarg.h \
 /usr/include/i386-linux-gnu/bits/stdio_lim.h \
 /usr/include/i386-linux-gnu/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/xlocale.h ../threads/thread.h ../machine/machine.h \
 ../threads/utility.h ../machine/TLBManager.h ../machine/translate.h \
 ../vm/SwappingStrategy.h ../machine/disk.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../userprog/bitmap.h \
 ../filesys/openfile.h ../machine/translate.h ../threads/tid.h \
 ../threads/scheduler.h ../threads/list.h ../machine/timer.h \
 ../threads/threadmanager.h ../machine/interrupt.h ../threads/list.h \
 ../machine/stats.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../network/post.h ../machine/network.h \
 ../threads/synchlist.h ../threads/synch.h ../vm/MemoryManager.h \
 ../vm/VirtMemManager.h ../vm/PhyMemManager.h ../vm/SwappingStrategy.h \
 ../vm/SwappingManager.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
