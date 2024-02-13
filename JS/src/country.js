class Country
{
  constructor(countryName)
  {
    this.countryName = countryName
    this.generatePeopleCount()
  }
  generatePeopleCount()
  {
    this.peopleCount = Math.floor(Math.random() * 5 + 5)
  }
  print()
  {
    console.log("Peoples in " + this.countryName + " " + this.peopleCount)
  }
}
export default Country;
