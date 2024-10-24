import java.util.*;

class Matrix(int No1, int No2)
{

    int Arr[][] = new int[No1][No2];

    public int iRow =0, iCol =0;

    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;
        Arr = new int[iRow][iCol]
        
    }
    

    for(iRow = 0; iRow < No1; iRow++)
    {
        for(iCol =0; iCol < No2; iCol++)
        {
            Arr[iRow][iCol] = sobj.nextInt();
        }
    }

    System.out.println("Elements from matrix:");
    
    for(iRow = 0; iRow < No1; iRow++)
    {
        for(iCol =0; iCol < No2; iCol++)
        {
            System.out.print(Arr[iRow][iCol] + "\t");
        }
        System.out.println();
    }

}

class program569
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of Rows: ");
        int No1 = sobj.nextInt();
        
        System.out.println("Enter number of Columns: ");
        int No2 = sobj.nextInt();
        
        
        System.out.println("Plz enter the data");

        Matrix(No1, No2);
    }
}