CFLAGS = -g

OBJS = insert_sort.o \
       bubble_sort.o \
       quick_sort.o \
       main.o

TARGET = run

$(TARGET):$(OBJS)
	gcc $(CFLAGS) -o $(TARGET) $(OBJS)

%.o:%.c
	gcc -c $(CFLAGS) $<

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
