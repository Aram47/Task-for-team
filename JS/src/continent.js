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
}

export default Continent