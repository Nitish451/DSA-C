# QUEUE
```
Queue is a linear collection of data item thats follows FIFO(first-in first-out) 
where insertion and deletion take place on opposite end.
The insetion end is called REAR;
The deletion end is called FRONT;
```
# NOTE
```
1.Enqueue - insetion of intem.
2.Dequeue - deletion of item.
3.Implement of can done through either Array or Linklist.

REAL LIFE EXAMPLE: collecting tickets ;
PROGRAMMING EXAMPLE: [_][12_][65_][_34][56_][_]
                      0   1    2    3    4    5
                      FRONT=1
                      END=4
                      N=6 (maximum queue)
```
# WRITE A ALGIRITHM FOR INSERTION OF QUEUE
```
   
    step 1: Begin 
    step 2: if Rear=N-1 then
         print "overflow and exit"                       [_][70_][_20][_30][_]
    step 3: input new item                                0  1     2    3   4
    step 4: rear<-rear+1;                                  rear=3
    step 5: queue[rear]<-item;                              front=1
    step 6: exit                                            n=5
```
# WRITE A ALGORITHM FOR DELETION
```
step 1: Begin
step 2: if front=-1 then print
                  print "underflow & exit"
step 3: set item <-queue[front] 
step 4: front <-front+1;
step 5: print "item deleted"
step 6: exit                


