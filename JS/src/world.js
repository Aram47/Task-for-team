import fs from 'fs'

class World
{
  constructor(worldName)
  {
    this.worldName = worldName
    this.continents = []
  }
  addContinent(continent)
  {
    this.continents.push(continent)
  }
  calculateTime(sun)
  {
    for(let i = 0; i < this.continents.length; ++i)
    {
      if(sun.status == true)
      {
        this.continents[i].sleep()
        sun.status = false
      }
      else
      {
        this.continents[i].awake()
        sun.status = true
      }
    }
  }
  print()
  {    
    for (let i = 0; i < this.continents.length / 2; ++i) {
      if(this.continents[i].sleeping == true)
      {
        console.log("The people of all the countries of the European continent woke up and the people of all the countries of the Asian continent slept");
        this.inputOnFile("The people of all the countries of the European continent woke up and the people of all the countries of the Asian continent slept");
      }
      else
      {
        console.log("The people of all the countries of the Asian continent woke up and the people of all the countries of the European continent slept");
        this.inputOnFile("The people of all the countries of the Asian continent woke up and the people of all the countries of the Asian continent slept");
      }
    }
  }

  inputOnFile(data)
  {
    fs.appendFile("Result.txt", data + '\n', "utf8", function(err){
      if (err) {
        console.error(err);
        return;
      }
    })
  }

}


export default World
