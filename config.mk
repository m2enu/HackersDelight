CC                  := gcc
LD                  := $(CC)

CP                  := cp -f
RM                  := rm -rf
MKDIR               := mkdir -p
WGET                := wget -q
UNZIP               := unzip -q -o

BUILD_CONFIG        := Debug

CFG_DIR             := $(BUILD_CONFIG)
SRC_DIR             := src
OBJ_DIR             := $(CFG_DIR)/obj
TST_DIR             := test
LIB_DIR             := lib
TMP_DIR             := tmp

VERBOSE             := 0
ifeq ($(VERBOSE),1)
Q                   :=
else
Q                   := @
endif

# end of file {{{1
# vim:ft=make:noet:ts=4:nowrap:fdm=marker
