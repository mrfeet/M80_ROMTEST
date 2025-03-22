
#
# Makefile for romtest
#

# Variables
NESTOR80_DIR=
N80=$(NESTOR80_DIR)/N80
LK80=$(NESTOR80_DIR)/LK80

#
# Default target
#
all: 
	$(N80) ROMTEMPLATE.MAC --listing-file
	$(N80) ROMPAGE1.MAC --listing-file
	$(N80) ROMPAGE2.MAC --listing-file
	$(LK80) ROMTEMPLATE.REL
	# Add the pages together to a single ROM file
	cat ROMTEMPLATE.BIN ROMPAGE1.BIN ROMPAGE2.BIN > ROMTEMPLATE.ROM

#
# Clean all
#	
clean:
	-rm -f *.BIN
	-rm -f *.REL
	-rm -f *.LST
	-rm -f *.ROM


