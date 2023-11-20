CROSS_COMPILE=#arm-linux-gnueabihf-
CC=$(CROSS_COMPILE)gcc
CXX=$(CROSS_COMPILE)g++
BIN=test
SRCS=$(wildcard *.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))
CFLAGS=-Wall
LDFLGAS=
INCS=
LIBS=
NFSDIR=/home/meson/nfsroot

$(BIN):$(OBJS)
	$(CXX) $^ -o $@ $(LDFLGAS)

%.o:%.cpp
	$(CXX) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)
distclean:
	rm -f $(OBJS)
	rm -f $(BIN)
copy:
	cp $(BIN) $(NFSDIR)
