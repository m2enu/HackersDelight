$(OBJ_DIR)/%.o: %.c
	$(info Compiling $<)
	$(Q)[ -d `dirname $@` ] || mkdir -p `dirname $@`
	$(Q)$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

IS_DRYRUN           := $(findstring n,$(filter-out --%,$(MAKEFLAGS)))
ONLY_CLEAN          := $(findstring _clean_,_$(MAKECMDGOALS)_)
ifeq ($(or $(IS_DRYRUN),$(ONLY_CLEAN)),)
-include $(DEPS)
endif

# end of file {{{1
# vim:ft=make:noet:ts=4:nowrap:fdm=marker
