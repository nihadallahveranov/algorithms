using System;

namespace smprest
{
    class MainClass
    {
        // Simple Order Program
        // Menu From Shah Restaurant

        enum menu_headers { Main_Courses, Fish_Dishes, Salads, Soups, Drinks }       // 0, 1, 2, 3, 4

        enum Main_Courses { Dolma = 7, Djiz_bizz = 6, Chighirtma = 12 }             // prices: 7, 6, 12

        enum Fish_Dishes { Zander = 8, Kutum = 14, Syrdagh = 25, Fillet = 12 }     // prices: 8, 14, 25, 12

        enum Salads { Shah = 7, Manqal = 5, Choban = 4, Green = 6}                // prices: 7, 5, 4, 6

        enum Soups { Shah = 10, Piti = 7, Dovga = 4, Dushbara = 5 }              // prices: 10, 7, 4, 5

        enum Drinks { Tarkhunlu = 2, Ayran = 1, Cola = 3, Kompot = 4 }          // prices: 2, 1, 3, 4

        struct client
        {
            public string name;
            public string surname;
            public string phone;
        }

        static client client1 = new client();
        static int total = 0;

        public static void Main(string[] args)
        {
            Console.WriteLine("\t\tWelcome to Shah Restaurant");            // Reservation operations
            Console.Write("\nFor Reservation Enter the Name: ");
            client1.name = Console.ReadLine();
            Console.Write("Enter the Surname: ");
            client1.surname = Console.ReadLine();
            Console.Write("Enter the Phone: ");
            client1.phone = Console.ReadLine();
            Console.WriteLine("\n");

            while (true)
            {
                foreach (var name in Enum.GetNames(typeof(menu_headers)))
                    Console.WriteLine(name + " for -> " + (int)Enum.Parse(typeof(menu_headers), name));
                object choice_menu, choice_item;
                label1:
                Console.Write("\nEnter Number for the Menu: ");
                try
                {
                    choice_menu = Convert.ToInt32(Console.ReadLine());
                }
                catch (Exception)
                {
                    Console.WriteLine("Invalid Input");
                    goto label1;
                }
                switch (choice_menu)            // For menu (menu_headers)
                {
                    case 0:     // Main_Courses
                        foreach (var name in Enum.GetNames(typeof(Main_Courses)))
                            Console.WriteLine(name + " -> " + (int)Enum.Parse(typeof(Main_Courses), name) + " AZN");
                        label2:
                        Console.Write("\nEnter Price for the Item: ");
                        try
                        {
                            choice_item = Convert.ToInt32(Console.ReadLine());
                            if (Enum.IsDefined(typeof(Main_Courses), choice_item) == true)
                                total += (int)choice_item;
                            else
                            {
                                Console.WriteLine("Invalid Input");
                                goto label2;
                            }
                        }
                        catch (Exception)
                        {
                            Console.WriteLine("Invalid Input");
                            goto label2;
                        }
                        break;


                    case 1:     // Fish_Dishes
                        foreach (var str in Enum.GetNames(typeof(Fish_Dishes)))
                            Console.WriteLine(str + " -> " + (int)Enum.Parse(typeof(Fish_Dishes), str) + " AZN");
                        label3:
                        Console.Write("\nEnter Price for the Item: ");
                        try
                        {
                            choice_item = Convert.ToInt32(Console.ReadLine());
                            if (Enum.IsDefined(typeof(Fish_Dishes), choice_item) == true)
                                total += (int)choice_item;
                            else
                            {
                                Console.WriteLine("Invalid Input");
                                goto label3;
                            }
                        }
                        catch (Exception)
                        {
                            Console.WriteLine("Invalid Input");
                            goto label3;
                        }
                        break;


                    case 2:     // Salads
                        foreach (var str in Enum.GetNames(typeof(Salads)))
                            Console.WriteLine(str + " -> " + (int)Enum.Parse(typeof(Salads), str) + " AZN");
                        label4:
                        Console.Write("\nEnter Price for the Item: ");
                        try
                        {
                            choice_item = Convert.ToInt32(Console.ReadLine());
                            if (Enum.IsDefined(typeof(Salads), choice_item) == true)
                                total += (int)choice_item;
                            else
                            {
                                Console.WriteLine("Invalid Input");
                                goto label4;
                            }
                        }
                        catch (Exception)
                        {
                            Console.WriteLine("Invalid Input");
                            goto label4;
                        }
                        break;


                    case 3:     // Soups
                        foreach (var str in Enum.GetNames(typeof(Soups)))
                            Console.WriteLine(str + " -> " + (int)Enum.Parse(typeof(Soups), str) + " AZN");
                        label5:
                        Console.Write("\nEnter Price for the Item: ");
                        try
                        {
                            choice_item = Convert.ToInt32(Console.ReadLine());
                            if (Enum.IsDefined(typeof(Soups), choice_item) == true)
                                total += (int)choice_item;
                            else
                            {
                                Console.WriteLine("Invalid Input");
                                goto label5;
                            }
                        }
                        catch (Exception)
                        {
                            Console.WriteLine("Invalid Input");
                            goto label5;
                        }
                        break;


                    case 4:     // Drinks
                        foreach (var str in Enum.GetNames(typeof(Drinks)))
                            Console.WriteLine(str + " -> " + (int)Enum.Parse(typeof(Drinks), str) + " AZN");
                        label6:
                        Console.Write("\nEnter Price for the Item: ");
                        try
                        {
                            choice_item = Convert.ToInt32(Console.ReadLine());
                            if (Enum.IsDefined(typeof(Drinks), choice_item) == true)
                                total += (int)choice_item;
                            else
                            {
                                Console.WriteLine("Invalid Input");
                                goto label6;
                            }
                        }
                        catch (Exception)
                        {
                            Console.WriteLine("Invalid Input");
                            goto label6;
                        }
                        break;


                    default:
                        Console.WriteLine("Invalid Input");
                        goto label1;
                }
                Console.Write("Press the escape for exit");
                ConsoleKeyInfo info1 = Console.ReadKey(true);
                if (info1.Key == ConsoleKey.Escape)
                {
                    Console.Clear();
                    Console.WriteLine("Total Price: " + total);
                    break;
                }
                Console.WriteLine("\n\n");
            }
        }
    }
}
