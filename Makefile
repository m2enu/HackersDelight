MAKEFLAGS           += --no-builtin-rules
-include config.mk

ifeq ($(VERBOSE),1)
MAKEFLAG_SILENT     := 
else
MAKEFLAG_SILENT     := -s
endif
MAKEFILE_UNITY      := unity.mk
MAKEFILE_DEBUG      := debug.mk

PHONY_ALL           := all
PHONY_CLEAN         := clean
PHONY_RUN           := run
PHONY_UNITTEST      := unittest

.PHONY: all
all:

.PHONY: clean
clean:
	$(RM) $(OBJ_DIR)/* $(TARGET)

.PHONY: setup
setup:
	$(Q)$(MAKE) $(MAKEFLAG_SILENT) -f $(MAKEFILE_UNITY) $(PHONY_ALL)

.PHONY: debug
debug:
	$(Q)$(MAKE) $(MAKEFLAG_SILENT) -f $(MAKEFILE_DEBUG) $(PHONY_ALL)

.PHONY: debugclean
debugclean:
	$(Q)$(MAKE) $(MAKEFLAG_SILENT) -f $(MAKEFILE_DEBUG) $(PHONY_CLEAN)

.PHONY: debugrun
debugrun:
	$(Q)$(MAKE) $(MAKEFLAG_SILENT) -f $(MAKEFILE_DEBUG) $(PHONY_RUN)

.PHONY: debugtest
debugtest:
	$(Q)$(MAKE) $(MAKEFLAG_SILENT) -f $(MAKEFILE_DEBUG) $(PHONY_UNITTEST)

# end of file {{{1
# vim:ft=make:noet:ts=4:nowrap:fdm=marker
