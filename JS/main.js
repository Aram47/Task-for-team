import Country from './Country/country.js'
import Continent from './Continents/continent.js'
import World from './World/world.js'
import Sun from './Sun/sun.js'

let sun = new Sun()

let world = new World("Country")

let country1 = new Country("Armenia")
let country2 = new Country("Uzbekistan")
let country3 = new Country("Norway")
let country4 = new Country("France")

let continent1 = new Continent("Asia")
let continent2 = new Continent("Europe")

continent1.addCountry(country1)
continent1.addCountry(country2)
continent2.addCountry(country3)
continent2.addCountry(country4)

world.addContinent(continent1)
world.addContinent(continent2)

for(let i = 0; i < 10; ++i)
{
    world.calculateTime(sun)
    world.print()
}

