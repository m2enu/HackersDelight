MAKEFLAGS           += --no-builtin-rules
-include config.mk

TARGET_DIR          := $(CFG_DIR)/bin
TARGET_ELF          := $(addprefix $(TARGET_DIR)/,$(notdir $(shell pwd)).elf)

SRC_DIR_LIST        := $(shell find $(SRC_DIR) -type d)
SRC_EXCLUDE_LIST    := 

ifeq ($(findstring _unittest_,_$(MAKECMDGOALS)_),_unittest_)
TARGET_ELF          := $(TARGET_DIR)/unittest.elf
FRAMEWORK_DIR       := $(LIB_DIR)/unity

SRC_DIR_LIST        += \
	$(shell find $(FRAMEWORK_DIR) -type d) \
	$(shell find $(TST_DIR) -type d) \

SRC_EXCLUDE_LIST    += \
	$(SRC_DIR)/main.c \

endif

SRC_TARGET_LIST     := $(foreach dir,$(SRC_DIR_LIST),$(wildcard $(dir)/*.c))
SRCS                := $(filter-out $(SRC_EXCLUDE_LIST),$(SRC_TARGET_LIST))

INCLUDE             := $(foreach dir,$(SRC_DIR_LIST),-I$(dir))

OBJS                := $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
DEPS                := $(OBJS:.o=.d)
LIBS                := 

CFLAGS              := -Wall -Wextra -MMD -MP
LDFLAGS             := 

.PHONY: all
all: $(TARGET_ELF)

.PHONY: clean
clean:
	$(RM) $(OBJ_DIR) $(TARGET_ELF)

.PHONY: run
run: $(TARGET_ELF)
	$(Q)./$(TARGET_ELF)

.PHONY: unittest
unittest: $(TARGET_ELF)
	$(Q)./$(TARGET_ELF)

$(TARGET_ELF): $(OBJS)
	$(info Generating $@)
	$(Q)[ -d `dirname $@` ] || mkdir -p `dirname $@`
	$(Q)$(LD) $(LDFLAGS) -o $@ $^

-include buildrules.mk

# end of file {{{1
# vim:ft=make:noet:ts=4:nowrap:fdm=marker
