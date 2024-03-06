using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ejercicio_1
{
    class Program
    {
        static void Main()
        {
            
            
                Console.Write("Ingrese su nombre:");
                string nombre = Console.ReadLine();
                Console.Write("Ingrese su apellido:");
                string apellido = Console.ReadLine();
                double ventas = 0;
                double ventadelmes = 0;
                double promediototal;
                for (int i = 1; i <= 12; i++)
                {
                    Console.Write("Ingrese las ventas para el mes " + i + ":");
                    ventadelmes = Convert.ToDouble(Console.ReadLine());
                    ventas = ventas + ventadelmes;
                }

                promediototal = ventas / 12;
                Console.Write("El promedio de ventas mensual  es:" + promediototal);

            Console.ReadKey();
            }
    }

}    