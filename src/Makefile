CXXFLAGS += -g --std=c++17

.SUFFIXES: .quoted
.PHONY: all clean .gitignore used

TARGETS += bad-simpleshared bad-simpleshared.cc.quoted bad-simpleshared.out
TARGETS += ex-alias ex-alias.out ex-alias.cc.quoted
TARGETS += aliasshared.svg
TARGETS += ex-autoptr-assign ex-autoptr-assign.cc.quoted ex-autoptr-assign.out
TARGETS += stdsharedptr.svg
TARGETS += ex-makeshared2 ex-makeshared2.cc.quoted ex-makeshared2.out
TARGETS += ex-makeshared ex-makeshared.cc.quoted ex-makeshared.out makeshared.svg
TARGETS += ex-refcount ex-refcount.cc.quoted ex-refcount.out
TARGETS += ex-scopedptr ex-scopedptr.cc.quoted ex-scopedptr.out
TARGETS += ex-sharedfromthis ex-sharedfromthis.cc.quoted ex-sharedfromthis.out
TARGETS += ex-sharedptr ex-sharedptr.cc.quoted ex-sharedptr.out
TARGETS += ex-simpleshared ex-simpleshared.cc.quoted ex-simpleshared.out
TARGETS += ex-uniqueptr-assign.cc.quoted ex-uniqueptr-assign.compile-errs.quoted ex-uniqueptr-assign.compile-errs
TARGETS += ex-uniqueptr-multi ex-uniqueptr-multi.cc.quoted ex-uniqueptr-multi.out
TARGETS += ex-weakptr.cc.quoted ex-weakptr.out ex-weakptr
TARGETS += foo.h.quoted
TARGETS += .gitignore
TARGETS += htmlfilt
TARGETS += operatornew.h.quoted
TARGETS += refcount.h.quoted
TARGETS += scopedptr.h.quoted
TARGETS += sharedptr1.svg sharedptr2.svg
TARGETS += simpleshared.h.quoted
TARGETS += virtual1 virtual1.out virtual1.cc.quoted
TARGETS += virtual2 virtual2.out virtual2.cc.quoted
TARGETS += virtual3 virtual3.out virtual3.cc.quoted basederived.h.quoted
TARGETS += weakptr.svg weakptr2.svg
TARGETS += makesharedweak.out makesharedweak.cc.quoted makesharedweak
TARGETS += sharedfromthis.h.quoted

all: htmlfilt $(TARGETS)

clean:
	rm -f *.o $(TARGETS) *.quoted

%.quoted: % htmlfilt
	./htmlfilt < $< > $@

%: %.o
	$(CXX) -o $@ $<

%.out: % htmlfilt
	echo "output from $* " > $@
	echo >> $@
	env LIBC_FATAL_STDERR_=1 ./$^ 2>&1 | ./htmlfilt >> $@

ex-uniqueptr-assign.compile-errs:
	( $(CC) -c ex-uniqueptr-assign.cc -o /dev/null 2>&1 | tee $@ ) || true

%.svg: %.dot
	dot -Tsvg -o $@ $<

.gitignore:
	echo core $(TARGETS) | tr ' ' '\n' > $@

used:
	for i in $(TARGETS); do \
	    grep -l $$i ../index.html || echo $$i \?; done
