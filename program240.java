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
}

class program240

{
    public static void main(String Arg[])
    {

        ArrayX aobj = new ArrayX(5);

        System.out.println("Size of array is : "+ aobj.Arr.length);
    }
}