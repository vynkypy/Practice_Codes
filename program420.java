import javax.xml.validation.Validator;

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

class Stack
{
    public node First;
    public int iCount;

    public Stack()
    {
        System.out.println("Object of Stack gets created sucussfully ");
        First =null;
        iCount =0;
    }

    public void Push(int No)
    {
        node newn = new node(No);

        if(First == null)
        {
            First = newn;

        }
        else
        {
            newn.next = First;
            First= newn;

        }
        iCount++;
    }
    public int Pop()
    {
        int iValue = 0;
        if(First == null)
        {
            System.out.println("Stack is empty");
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
        System.out.println("Element of Stack are : ");
        
        node temp = First;

        while(temp!= null)
        {
            System.out.println(temp.data);
            temp = temp.next;
        }
    }

    public int Count()
    {
        return iCount;
    }
}

class program420
{
    public static void main(String Arg[])
    {
        Stack obj = new Stack();  
        int iRet = 0;

        obj.Push(10);
        obj.Push(20);
        obj.Push(30);
        obj.Push(40);

        obj.Display();

        iRet = obj.Pop();
        System.out.println("Popped element is "+iRet);

        obj.Display();

    }
}