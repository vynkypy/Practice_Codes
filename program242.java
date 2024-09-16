import java.util.*;

class ArrayX
{
    public int Arr[];
    
    public ArrayX(int no)
    {
        Arr = new int[no];

    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements: ");
        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the Array are: ");

        int i = 0;
        for(i = 0; i < Arr.length; i++)
        {
            System.out.println(Arr[i]);

        }
    }

    public float Average()
    {
        int i = 0, iSum = 0;
        float fAns = 0.0f;
    
        for(i =0; i < Arr.length; i++)
        {
            iSum = iSum+Arr[i];
        }
        fAns = (float)iSum / (float)(Arr.length);
        return fAns;
    }
}

class program242

{
    public static void main(String Arg[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter the number of elements you wnat to store :");
        int iNo = sobj.nextInt();

        // ArrayX aobj = new ArrayX()

        ArrayX aobj = new ArrayX(iNo);

        System.out.println("Size of array is : "+ aobj.Arr.length);
        
        aobj.Accept();
        aobj.Display();

        float fRet =  aobj.Average();

        System.out.println("Avg of elements is : "+ fRet);
 
    
    
    }
}