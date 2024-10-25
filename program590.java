// Problems on string Advance
import java.util.*;

class program589
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter String");

        String str = sobj.nextLine();

        System.out.println("Entered String is: "+str);  
        
        str = str.replaceAll("a", "z");
        System.out.println("Entered String is after replace: "+str);  

    }

}