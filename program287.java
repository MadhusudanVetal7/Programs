import java.lang.*;
import java.util.*;
import java.io.*;

class program285
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter file name");
        String Filename = sobj.nextLine()

        File fobj = new File(Filename);
        boolean bobj = fobj.createnNewFile();

        if(bobj == true)
        {
            System.out.println("File is Successfully Created");
        }
        else
        {
            System.out,println("File is already existing");
        }
    }
}