MAKEFLAGS           += --no-builtin-rules
-include config.mk

UNITY_URL           := https://github.com/ThrowTheSwitch/Unity/archive/master.zip
UNITY_ZIP           := $(TMP_DIR)/unity-master.zip
UNITY_DIR           := $(TMP_DIR)/Unity-master
UNITY_COPY_DST      := $(LIB_DIR)/unity
UNITY_COPY_SRC      := \
	$(UNITY_DIR)/src \
	$(UNITY_DIR)/extras/fixture/src \
	$(UNITY_DIR)/extras/memory/src \
	$(UNITY_DIR)/examples/unity_config.h \

.PHONY: all
all: download copy

.PHONY: clean
clean:
	$(RM) $(UNITY_ZIP) $(UNITY_DIR) $(UNITY_COPY_DST)

.PHONY: copy
copy:
	$(info Copying Unity sources to test directory)
	$(Q)[ -d $(UNITY_COPY_DST) ] || $(MKDIR) $(UNITY_COPY_DST)
	$(Q)$(CP) -r $(UNITY_COPY_SRC) $(UNITY_COPY_DST)

.PHONY: download
download: $(UNITY_ZIP)

$(UNITY_ZIP):
	$(info Downloading $(UNITY_URL))
	$(Q)[ -d `dirname $@` ] || $(MKDIR) `dirname $@`
	$(Q)$(WGET) $(UNITY_URL) -O $@
	$(Q)[ -e $(UNITY_DIR) ] || $(UNZIP) -d $(TMP_DIR) $(UNITY_ZIP)

# end of file {{{1
# vim:ft=make:noet:ts=4:nowrap:fdm=marker
