using System;
using System.Collections.Generic;

namespace VehicleProduction
{
    class Vehicle
    {
        public string Model { get; set; }
        public int Year { get; set; }
        public string Vin { get; set; }

        public Vehicle(string model, int year, string vin)
        {
            Model = model;
            Year = year;
            Vin = vin;
        }

        public virtual void StartAssembly()
        {
            Console.WriteLine($"{Model} production started.");
        }
    }

    class Car : Vehicle
    {
        public int Doors { get; set; }
        public Car(string model, int year, string vin, int doors) : base(model, year, vin) { Doors = doors; }

        public override void StartAssembly()
        {
            Console.WriteLine($"{Model} (Car) is on the line. Doors: {Doors}");
        }
    }

    class Truck : Vehicle
    {
        public double Capacity { get; set; }
        public Truck(string model, int year, string vin, double cap) : base(model, year, vin) { Capacity = cap; }

        public override void StartAssembly()
        {
            Console.WriteLine($"{Model} (Truck) heavy chassis active. Capacity: {Capacity} tons");
        }
    }

    class Program
    {
        static void Main()
        {
            var productionLine = new List<Vehicle>
            {
                new Car("Focus", 2024, "FD-C-101", 4),
                new Truck("F-Max", 2024, "FD-T-909", 18.5)
            };

            foreach (var v in productionLine)
            {
                v.StartAssembly();
            }
        }
    }
}
