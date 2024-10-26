
class Employee
{
    public int EID;
    public String Ename;
    public String EAddress;
    public int ESalary;
    
    private static int Counter;

    static
    {
        Counter = 0;

    }
    public Employee( String B, String C, int D)
    {
        this.EID = ++Counter;
        this.Ename =B;
        this.EAddress =C;
        this.ESalary =D;

    }

    void DisplayInfo()
    {
        System.out.println("EID: "+ EID + " Name: "+Ename+" Address: "+EAddress+" Salary: "+ESalary);
    }
    
}

class program640
{
    public static void main(String Arg[])
    {
        System.out.println("------------------------------------Marvellous Customize Manangement System------------------------------------");
        Employee eobj1 = new Employee( "Amit", "Pune", 12000);
        Employee eobj2 = new Employee( "Megha", "Satara", 23000);
        Employee eobj3 = new Employee( "Seema", "Sangli", 11000);
        eobj1.DisplayInfo();
        eobj2.DisplayInfo();
        eobj3.DisplayInfo();
    }    
}