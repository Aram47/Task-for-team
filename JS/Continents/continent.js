class Continent
{
  constructor(name)
  {
    this.sleeping = true
    this.name = name
    this.countries = []
  }

  addCountry(country)
  {
    this.countries.push(country)
  }

  sleep()
  {
    this.sleeping = !this.sleeping
  }

  awake()
  {
    this.sleeping = !this.sleeping
  }

  // print()
  // {
  //   console.log("Countries in " + this.name + "\n")

  //   for(let elem of this.countries)
  //   {
  //     console.log(elem.countryName)
  //   }

  //   console.log("\n")

  //   for(let elem of this.countries)
  //   {
  //     elem.print()
  //   }

  //   console.log("\n")
  // }
}

export default Continent