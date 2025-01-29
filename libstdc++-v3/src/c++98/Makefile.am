## Makefile for the C++03 sources of the GNU C++ Standard library.
##
## Copyright (C) 1997-2025 Free Software Foundation, Inc.
##
## This file is part of the libstdc++ version 3 distribution.
## Process this file with automake to produce Makefile.in.

## This file is part of the GNU ISO C++ Library.  This library is free
## software; you can redistribute it and/or modify it under the
## terms of the GNU General Public License as published by the
## Free Software Foundation; either version 3, or (at your option)
## any later version.

## This library is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.

## You should have received a copy of the GNU General Public License along
## with this library; see the file COPYING3.  If not see
## <http://www.gnu.org/licenses/>.

include $(top_srcdir)/fragment.am

# Convenience library for C++98 runtime.
noinst_LTLIBRARIES = libc++98convenience.la

headers =

if ENABLE_DUAL_ABI
cow_string_host_sources = \
	collate_members_cow.ml \
	messages_members_cow.ml \
	monetary_members_cow.ml \
	numeric_members_cow.ml
endif

# Source files linked in via configuration/make substitution for a
# particular host.
host_sources = \
	$(cow_string_host_sources) \
	codecvt_members.ml \
	collate_members.ml \
	messages_members.ml \
	monetary_members.ml \
	numeric_members.ml \
	time_members.ml

codecvt_members.ml: ${glibcxx_srcdir}/$(CCODECVT_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CCODECVT_CC) . || true

collate_members.ml: ${glibcxx_srcdir}/$(CCOLLATE_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CCOLLATE_CC) . || true

messages_members.ml: ${glibcxx_srcdir}/$(CMESSAGES_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CMESSAGES_CC) . || true

monetary_members.ml: ${glibcxx_srcdir}/$(CMONEY_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CMONEY_CC) . || true

numeric_members.ml: ${glibcxx_srcdir}/$(CNUMERIC_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CNUMERIC_CC) . || true

time_members.ml: ${glibcxx_srcdir}/$(CTIME_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CTIME_CC) . || true

if ENABLE_DUAL_ABI
collate_members_cow.ml: ${glibcxx_srcdir}/$(CCOLLATE_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CCOLLATE_CC) ./$@ || true

messages_members_cow.ml: ${glibcxx_srcdir}/$(CMESSAGES_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CMESSAGES_CC) ./$@ || true

monetary_members_cow.ml: ${glibcxx_srcdir}/$(CMONEY_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CMONEY_CC) ./$@ || true

numeric_members_cow.ml: ${glibcxx_srcdir}/$(CNUMERIC_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CNUMERIC_CC) ./$@ || true
endif

# Source files linked in via configuration/make substitution for a
# particular host, but with ad hoc naming rules.
host_sources_extra = \
	c++locale.ml

c++locale.ml: ${glibcxx_srcdir}/$(CLOCALE_CC)
	$(LN_S) ${glibcxx_srcdir}/$(CLOCALE_CC) ./$@ || true

if ENABLE_DUAL_ABI
cxx11_abi_sources = \
	cow-istream-string.ml
else
cxx11_abi_sources =
endif

if ENABLE_EXTERN_TEMPLATE
# XTEMPLATE_FLAGS = -fno-implicit-templates
inst_sources = \
	allocator-inst.ml \
	concept-inst.ml \
	ext-inst.ml \
	misc-inst.ml
else
# XTEMPLATE_FLAGS =
inst_sources =
endif

parallel_sources = parallel_settings.ml

# Sources present in the src directory, always present.
sources = \
	bitmap_allocator.ml \
	pool_allocator.ml \
	mt_allocator.ml \
	codecvt.ml \
	complex_io.ml \
	globals_io.ml \
	hash_tr1.ml \
	hashtable_tr1.ml \
	ios_failure.ml \
	ios_init.ml \
	ios_locale.ml \
	list.ml \
	list-aux.ml \
	list-aux-2.ml \
	list_associated.ml \
	list_associated-2.ml \
	locale.ml \
	locale_facets.ml \
	math_stubs_float.ml \
	math_stubs_long_double.ml \
	stdexcept.ml \
	strstream.ml \
	tree.ml \
	istream.ml \
	istream-string.ml \
	streambuf.ml \
	valarray.ml \
	${cxx11_abi_sources} \
	${host_sources} \
	${host_sources_extra} \
	${inst_sources} \
	${parallel_sources}

vpath % $(top_srcdir)/src/c++98

if GLIBCXX_HOSTED
libc__98convenience_la_SOURCES = $(sources)
else
libc__98convenience_la_SOURCES =
endif

# Use special rules to compile with -fimplicit-templates.
c++locale.lo: c++locale.ml
	$(LTCXXCOMPILE) -fimplicit-templates -c $<
c++locale.o: c++locale.ml
	$(CXXCOMPILE) -fimplicit-templates -c $<

if ENABLE_DUAL_ABI
GLIBCXX_ABI_FLAGS = -D_GLIBCXX_USE_CXX11_ABI=@glibcxx_cxx98_abi@
# Use special rules to compile with the non-default string ABI.
collate_members_cow.lo: collate_members_cow.ml
	$(LTCXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
collate_members_cow.o: collate_members_cow.ml
	$(CXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
messages_members_cow.lo: messages_members_cow.ml
	$(LTCXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
messages_members_cow.o: messages_members_cow.ml
	$(CXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
monetary_members_cow.lo: monetary_members_cow.ml
	$(LTCXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
monetary_members_cow.o: monetary_members_cow.ml
	$(CXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
numeric_members_cow.lo: numeric_members_cow.ml
	$(LTCXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
numeric_members_cow.o: numeric_members_cow.ml
	$(CXXCOMPILE) $(GLIBCXX_ABI_FLAGS) -fimplicit-templates -c $<
endif

# Use special rules for the deprecated source files so that they find
# deprecated include files.
GLIBCXX_INCLUDE_DIR=$(glibcxx_builddir)/include
strstream.lo: strstream.ml
	$(LTCXXCOMPILE) -I$(GLIBCXX_INCLUDE_DIR)/backward -Wno-deprecated -c $<
strstream.o: strstream.ml
	$(CXXCOMPILE) -I$(GLIBCXX_INCLUDE_DIR)/backward -Wno-deprecated -c $<

# Use special rules for the concept-checking instantiations so that all
# the generated template functions are also instantiated.  Force the checks
# to be on so that the instantiations are actually seen.
concept-inst.lo: concept-inst.ml
	$(LTCXXCOMPILE) -D_GLIBCXX_CONCEPT_CHECKS -fimplicit-templates -c $<
concept-inst.o: concept-inst.ml
	$(CXXCOMPILE) -D_GLIBCXX_CONCEPT_CHECKS -fimplicit-templates -c $<

# Use special rules for parallel mode compilation.
PARALLEL_FLAGS = -D_GLIBCXX_PARALLEL
parallel_settings.lo: parallel_settings.ml
	$(LTCXXCOMPILE) $(PARALLEL_FLAGS) -c $<
parallel_settings.o: parallel_settings.ml
	$(CXXCOMPILE) $(PARALLEL_FLAGS) -c $<

# AM_CXXFLAGS needs to be in each subdirectory so that it can be
# modified in a per-library or per-sub-library way.  Need to manually
# set this option because CONFIG_CXXFLAGS has to be after
# OPTIMIZE_CXXFLAGS on the compile line so that -O2 can be overridden
# as the occasion calls for it.
AM_CXXFLAGS = \
	-std=gnu++98 \
	$(glibcxx_lt_pic_flag) $(glibcxx_compiler_shared_flag) \
	$(XTEMPLATE_FLAGS) $(VTV_CXXFLAGS) \
	$(WARN_CXXFLAGS) $(OPTIMIZE_CXXFLAGS) $(CONFIG_CXXFLAGS)

AM_MAKEFLAGS = \
	"gxx_include_dir=$(gxx_include_dir)"

# Libtool notes

# 1) In general, libtool expects an argument such as `--tag=CXX' when
# using the C++ compiler, because that will enable the settings
# detected when C++ support was being configured.  However, when no
# such flag is given in the command line, libtool attempts to figure
# it out by matching the compiler name in each configuration section
# against a prefix of the command line.  The problem is that, if the
# compiler name and its initial flags stored in the libtool
# configuration file don't match those in the command line, libtool
# can't decide which configuration to use, and it gives up.  The
# correct solution is to add `--tag CXX' to LTCXXCOMPILE and maybe
# CXXLINK, just after $(LIBTOOL), so that libtool doesn't have to
# attempt to infer which configuration to use.
#
# The second tag argument, `--tag disable-shared` means that libtool
# only compiles each source once, for static objects. In actuality,
# glibcxx_lt_pic_flag and glibcxx_compiler_shared_flag are added to
# the libtool command that is used create the object, which is
# suitable for shared libraries.  The `--tag disable-shared` must be
# placed after --tag CXX lest things CXX undo the affect of
# disable-shared.

# 2) Need to explicitly set LTCXXCOMPILE so that EXTRA_CXX_FLAGS is
# last. (That way, things like -O2 passed down from the toplevel can
# be overridden by --enable-debug.)
LTCXXCOMPILE = \
	$(LIBTOOL) --tag CXX --tag disable-shared \
	$(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=compile $(CXX) $(TOPLEVEL_INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS) $(EXTRA_CXX_FLAGS)

LTLDFLAGS = $(shell $(SHELL) $(top_srcdir)/../libtool-ldflags $(LDFLAGS))

# 3) We'd have a problem when building the shared libstdc++ object if
# the rules automake generates would be used.  We cannot allow g++ to
# be used since this would add -lstdc++ to the link line which of
# course is problematic at this point.  So, we get the top-level
# directory to configure libstdc++-v3 to use gcc as the C++
# compilation driver.
CXXLINK = \
	$(LIBTOOL) --tag CXX --tag disable-shared \
	$(AM_LIBTOOLFLAGS) $(LIBTOOLFLAGS) \
	--mode=link $(CXX) \
	$(VTV_CXXLINKFLAGS) \
	$(OPT_LDFLAGS) $(SECTION_LDFLAGS) $(AM_CXXFLAGS) $(LTLDFLAGS) -o $@
