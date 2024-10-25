import java.util.*;

class Matrix
{
    public int iRow, iCol;
    public int Arr[][];
    
    public Matrix(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;

        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the data : ");

        int i = 0, j = 0;

        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Dissplay()
    {
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    int Summation()
    {
        int iSum = 0;
        
        int i = 0, j = 0;

        System.out.println("Elements from the matrix : ");
        
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println();
        }
        return iSum;
    }

    int Maximum()
    {
        int iMax = Arr[0][0], i = 0, j = 0;
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] > iMax)
                {
                    iMax = Arr[i][j];
                }
            }
            System.out.println();
        }
        return iMax;
        
    }
    int Minimum()
    {
        int iMin = Arr[0][0], i = 0, j = 0;
        for(i= 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] < iMin)
                {
                    iMin = Arr[i][j];
                }
            }
            System.out.println();
        }
        return iMin;
        
    }

    void RowSum()
    {
        int iSum = 0;
        
        int i = 0, j = 0;
        
        for(i= 0; i < iRow; i++)
        {
            iSum = 0;
            for(j = 0; j < iCol; j++)
            {
                iSum = iSum + Arr[i][j];
            }
            System.out.println("Row Sum is: "+iSum);
            System.out.println();
        }
    }

}

class program573
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int No1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int No2 = sobj.nextInt();

        Matrix mobj = new Matrix(No1,No2);

        mobj.Accept();
        mobj.Dissplay();
        
        int iRet = 0;
        iRet = mobj.Maximum();

        System.out.println("Max element is: "+iRet);
    
        iRet = mobj.Minimum();

        System.out.println("Min element is: "+iRet);
        mobj.RowSum();
        mobj = null;
    }
}