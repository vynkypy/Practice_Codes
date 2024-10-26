import java.util.*;

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

    public Employee(String B, String C, int D)
    {
        this.EID = ++Counter;
        this.Ename = B;
        this.EAddress = C;
        this.ESalary = D;
    }

    void DisplayInfo()
    {
        System.out.println("EID : "+EID+" Name : "+Ename+" Address : "+EAddress+" Salary : "+ESalary);
    }
}

class MarvellousDBMS
{
    public LinkedList <Employee> lobj;

    public MarvellousDBMS()
    {
        System.out.println("Marvellous DBMS started succesfully...");
        lobj = new LinkedList<Employee>();
    }

    // Insert into Employee values(1,"Sagar","Pune",11000);
    public void InsertIntoTable(String name, String Address, int Salary)
    {
        Employee eobj = new Employee(name,Address,Salary);
        lobj.add(eobj);
    }

    // Select * from emplyee;
    public void SelectStar()
    {
        System.out.println("Data from the Employee Databsae : ");
        // System.out.println("EID\tEname\t : ");

        for(Employee eref : lobj)
        {
            eref.DisplayInfo();
        }
    }

    // Select * from emplyee where Eid = 3;
    public void SelectSpecific(int ID)
    {
        System.out.println("Information of Employee whose EID is : "+ID);

        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                eref.DisplayInfo();
                break;
            }
        }
    }

    // Select * from emplyee where Ename = "Sagar";
    public void SelectSpecific(String Name)
    {
        System.out.println("Information of Employee whose Name is : "+Name);

        for(Employee eref : lobj)
        {
            if(Name.equals(eref.Ename))
            {
                eref.DisplayInfo();
            }
        }
    }

    // delete from Emplyee where EID = 3;
    public void DeleteFrom(int ID)
    {
        int index = 0;
        boolean bflag = false;

        for(Employee eref : lobj)
        {
            if(eref.EID == ID)
            {
                bflag = true;
                break;
            }
            index++;
        }

        if(bflag == false)
        {
            System.out.println("Unable to delete the element from database as given id is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    // delete from Emplyee where Ename = "Sagar";
    public void DeleteFrom(String Name)
    {
        int index = 0;
        boolean bflag = false;

        for(Employee eref : lobj)
        {
            if(Name.equals(eref.Ename))
            {
                bflag = true;
                break;
            }
            index++;
        }
        
        if(bflag == false)
        {
            System.out.println("Unable to delete the element from database as given id is not present");
        }
        else
        {
            lobj.remove(index);
        }
    }

    //select Sum(ESalary) from Employee;
    public void AggreegateSum()
    {
        int iSum = 0;
        for(Employee eref : lobj)
        {
            iSum = iSum+eref.ESalary;
        }
        System.out.println("Summation of salary: "+iSum);

    }
    public void AggreegateMax()
    {
        int iMax = 0;
        for(Employee eref : lobj)
        {
            if(eref.ESalary > iMax)
            {
                iMax = eref.ESalary;
            }
        }
        System.out.println("Maximum salary: "+iMax);

    }
    public void AggreegateMin()
    {
        Employee temp = lobj.get(0);

        int iMin = temp;
        for(Employee eref : lobj)
        {
            if(eref.ESalary < iMin)
            {
                iMin = eref.ESalary;
            }
        }
        System.out.println("Minimum salary: "+iMin);
    }

    public void AggreegateAvg()
    {
        int iAvg = 0, iSum = 0;
        for(Employee eref : lobj)
        {
            iSum = iSum+eref.ESalary;
        }
        System.out.println("Avg of salary: "+(iSum/lobj.size()));
    }

    public void AggreegateCount()
    {
        System.out.println("Number of employeeds "+lobj.size());
    }

    public void AggreegateCount()
    {
        System.out.println("Number of employeeds "+lobj.size());
    }
    

    
}

class program658
{
    public static void main(String Arg[])
    {
        System.out.println("-------- Marvellous Database Management System --------");

        MarvellousDBMS mobj = new MarvellousDBMS();
   
        // mobj.SelectStar();
        while (true) 
        {
            System.out.println("---------------------------------------------------------");("---------------------------------------------------------");    
            System.out.println("Select your choice");       
            System.out.println("---------------------------------------------------------");("---------------------------------------------------------");    
        
            System.out.println("1 Insert new row");
            System.out.println("2 Display all records");
            System.out.println("3 Display all records with specific EID");
            System.out.println("4 Display all records with specific Name");
        
            iOption = sobj.nextInt();

            switch (iOption)
             {
                case 1:
                    
                    break;
            
                default:
                    break;
                
                case 6;
                    Name = sobj.nextLine();

                    mobj.DeleteFrom(Name);

                    break;
                
                    case 7:
                    mobj.AggreegateSum();
                    break;
                    case 8:
                    mobj.AggreegateAvg();
                    break;
                    case 9:
                    mobj.AggreegateMax();
                    break;
                    case 10:
                    mobj.AggreegateMin();
                    break;
                    
                    case 11:
                    mobj.AggreegateCount();
                    break;

                    case 14:
                    System.out.print("Thanks for using our DBMS");
                    

            }
        
        }
    }
}