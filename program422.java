
class node
{
    public int data;
    public node next;

    public node(int Value)
    {
        data = Value;
        next = null;
    }
}

class Queue
{
    public node First;
    public int iCount;

    public Queue()
    {
        System.out.println("Object of Queue gets created sucussfully ");
        First =null;
        iCount =0;
    }

    public void Enqueue(int No) //insertLast()
    {
        node newn = new node(No);

        if(First == null)
        {
            First = newn;

        }
        else
        {
            node temp = First;

            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }
    public int Dequeue()
    {
        int iValue = 0;
        if(First == null)
        {
            System.out.println("Queue is empty");
            return -1;
        }
        else
        {
            iValue = First.data;
            First = First.next;
        }
        iCount--;
        return iValue;
    }
    public void Display()
    {
        System.out.print("Element of Queue are : ");
        
        node temp = First;

        while(temp!= null)
        {
            System.out.println(temp.data+"\t");
            temp = temp.next;
        }
        System.out.println();
    }

    public int Count()
    {
        return iCount;
    }
}

class program422
{
    public static void main(String Arg[])
    {
        Queue obj = new Queue();  
        int iRet = 0;

        obj.Enqueue(10);
        obj.Enqueue(20);
        obj.Enqueue(30);
        obj.Enqueue(40);

        obj.Display();

        iRet = obj.Dequeue();
        System.out.println("Removed element is "+iRet);

        obj.Display();

    }
}