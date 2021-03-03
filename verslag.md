## Verslag eindopdracht 6V

---

## Inleiding
Wij zijn groepje 4 en bestaan uit 7 mensen: Anna Marie, Lisa, Jasmijn, Chimène, Anouk, Charlotte en Sam. Onze opdracht was om een interactieve module voor een knikkerbaan te maken met een widget, een serverprogramma en SQL-database. Hiervoor konden wij gebruik gemaakt van GitHub, GitPod, Arduino en Heroku. In dit verslag leggen wij uit wat ons idee voor de module was, wat onze planning was en hoe deze is uitgevoerd, hoe de communicatie verliep en reflecteren we op ons project. Door de lockdown en de moeilijkheden die hierbij kwamen kijken hebben wij ons project moeten aanpassen. Wij vertellen per onderwerp was ons eerste plan was en hoe we dit hebben aangespast aan die nieuwe omstandigheden.



## Idee
Onze eerste ideeën voor de interactie in de knikkerbaan waren: 
- Een sensor die telt hoeveel ballen er langskomen en dit aantal wordt getoont op de widget
- Op de widget is een knop waarmee je kan kiezen welke kant de bal op gaat
- Lichtjes gaan branden op de baan waarneer er een bal langskomt

Als we tijd over hadden wilden we de volgende dingen ook proberen:
- Muziek speelt af wanneer er een bal langskomt
- Een trechter waar de bal in komt met snelheidsmeter
- Een ronddraairad die sneller of langzamer kan ronddraaien

Na de lockdown hoefde er geen knop meer op de widget te zijn waarmee je kon kiezen welke kant de bal op ging. Toch wilden we wel iets extra doen dus hebben we gekozen om ook de trechter te proberen maar zonder snelheidsmeter. Ons uiteindelijke idee was dus:
- Een sensor die telt hoeveel ballen er langskomen en dit aantal wordt getoont op de widget
- Lichtjes gaan branden op de baan wanneer er een bal langskomt
- Trechter

Hieronder is een schets te zien van ons uiteindelijke idee:
![image](https://user-images.githubusercontent.com/70636254/109413866-eb5e5e00-79af-11eb-8e88-2fa051b0c3a6.jpeg)

## Planning en daadwerkelijke uitvoering
Wij hadden 6 taken opgesteld: planning, Git, Arduino, server, webpagina, constructie. Voor elke taak hebben we in ieder geval één iemand verantwoordelijk gesteld (naam in hoofdletters) en meestal nog één helper. Hieronder de indeling:
- Planning: SAM
- Git: CHARLOTTE en Sam
- Arduino: ANOUK en Jasmijn
- Server: ANNA MARIE en Chimène
- Webpagina: CHIMÈNE en Anouk
- Constructie: LISA (en Charlotte als hulp)
De planning, constructie en Git gingen redelijk gemakkelijk dus hebben we daarna besloten dat Lisa ging helpen bij Arduino, Sam bij de webpagina en Charlotte bij de server.

Aan het begin van het project heeft iedereen per taak isseus opgesteld die gedaan moesten worden en deze zijn in GitHub gezet. Hierna hebben we met het hele groepje afgesproken wat we als eerste af wilden hebben, het minimale product. Deze isseus hebben we in GitHub op eerste sprint gezet. Door de omstandigheden is het bij het minimale product gebleven, waarbij door middel van de knop handmatig kan worden bijgehouden hoeveel knikkers er langskomen.

Onze bedoeling was dat de bewegingssensor bij ging houden hoeveel balletjes er voorbij komen en dat dit zichtbaar werd op de widget. Hiervoor moesten we de sensor van de arduino koppelen aan de server, zodat de server weet wanneer er een balletje is langsgekomen. Daarnaast moesten we een request op de widget aanmaken die de hoeveelheid balletjes aan de server vraagt en dit ook terugkrijgt. Ook moesten we de database bijwerken en een nieuwe tabel daarin maken. 
Daarnaast wilden we dat zodra alle balletjes voorbij waren gekomen, de gebruiker op de knop kon klikken en er een feestgeluidje uit zou komen. Aangezien we dit allemaal ontzettend moeilijk vonden om te kunnen coderen en niet wisten of al onze code goed zou zijn, hebben we besloten de code in een aparte bestand te maken zodat we niet het probleem zouden krijgen dat de oude widget enz. het niet meer zouden doen. De code uit dit bestand hebben we aan dit verslag toegevoegd.

## Technische verantwoording
Allereerst hadden wij het logboek, de planning en de issues in een online pages bestand bijgehouden. Iedereen had toegang tot dit document en dit gebruikte we ook als een soort notitieboekje waarin we opschreven wat we met elkaar wilden bespreken.
We hadden duidelijk de taken verdeeld en deze bovenaan in het document gezet met daaronder de isseus. Iedereen werkte aan zijn eigen taak, eventueel samen met haar partner. Dit contact werd onderling gehouden. Daarnaast hadden we een WhattsApp-groep waarin we de complicaties waarop we stuiten uitlegde en zo elkaar verderhielpen. Tijdens de informaticalessen in het lokaal of een break-out room liepen we het notitieboekje in het bestand door, vertelden we hoever we waren, wat er nog moest gebeuren en hoe we dat gingen aanpakken. De communicatie verliep dus erg goed.
Toen de lockdown kwam moesten we het logboek, de planning en de isseus in GitHub bijhouden. Sommigen hadden echter problemen met GitHub en kwamen er niet in. De GitHub specialist kon ook niet helpen omdat zij niet op school was wanneer de mensen met problemen ook op school waren. Daarom hebben we besloten de communicatie gewoon via het pages bestand te laten lopen. Later hebben we het logboek met issues van uit het Pages bestand overgenomen en in GitHub geplaatst.

## Uitwerking
Het uiteindelijke resultaat: https://youtu.be/M_1C3Emca3A

De sensoren betreft de lampjes werkten niet helemaal naar behoren. Dit heeft er mee te maken dat het knikkertje niet zwaar genoeg is. Toch doet de sensor in combinatie met een knikker nog best oke zijn werk.

## Reflectie
#### Sam Crabbé
Als ik terug kijk op het project ben ik niet erg tevreden. Ondanks de uitleg hadden wij naar mijn mening niet genoeg kennis om dit project goed te kunnen uitvoeren. Wij hebben ons best gedaan om deze kennis toch te krijgen door te vragen naar extra uitleg en zelf uren ons te verdiepen in het onderwerp. Zo hebben we bijvoorbeeld een ICT'er gebeld en gevraagd of hij ons extra uitleg kan geven en hebben we van meneer Cammeraat een extra uur uitleg over de server gekregen. Toch liepen we nog steeds vast op veel dingen. Hulp aan meneer Cammeraat vragen ging erg moeilijk omdat in de les meestal geen tijd voor vragen was en wanneer dit wel het geval was toevallig telkens alleen Lisa en Charlotte aanwezig waren en zij hielden zich niet bezig met de dingen waarop we vastliepen maar hadden andere taken.
Hier bovenop komt nog de Corona lockdown. Sommige hadden geen computer thuis tot hun beschikking en konden daarom maar twee keer, soms één keer per week aan het project op school werken (als ze eerder uit waren of tussenuren hadden). De samenwerking ging natuurlijk ook wat stroever doordat we op verschillende dagen naar school gingen. 
Iedereen is anders met deze tegen tegenslagen omgegaan en dit is ook te zien in de hoeveelheid werk die iedereen geleverd heeft.

#### Jasmijn van der Tempel
Ik vond dit een erg lastig project. De opdracht is erg groot en er zijn veel verschillende onderdelen die samen een geheel moeten vormen. Ik vond het zelf erg lastig om in te zien hoe dit allemaal bij elkaar gevoegd moest worden. En het werd nog lastiger door de lockdown. Daardoor zagen we elkaar niet vaak en was het lastig om afspraken te maken met elkaar. Ook was er in de les vaak niet veel tijd voor vragen over of om aan het project te werken, omdat we veel andere dingen moesten doen. Buiten school was het ook lastig om met elkaar af te spreken vanwege de coronaregels en dat we vaak niet op hetzelfde moment beschikbaar waren. Uiteindelijk denk ik dat we allemaal ons best hebben gedaan, en ondanks de omstandigheden, hebben geprobeerd om het beste eruit te halen. 

#### Lisa Verboom
Ik vond dit wel een leuke opdracht en was blij met de taken die ik moest doen. Wel hadden we wat problemen met de planning en de communicatie en dit heeft ook geleid tot een minder goed resultaat dan we van tevoren in gedachte hadden. Ook denk ik dat hierbij de ongelijke verdeling van het werk heeft meegespeeld. Ondanks dit alles kan ik toch zeggen dat ik mij tevreden voel over hoe onze knikkerbaan eruit is komen te zien en ben ik trots op de manier waarop wij ondanks de coronamaatregelen het beste uit deze opdracht hebben gehaald.

#### Charlotte Soer
De opdracht bleef voor mij gelange tijd voor een 'error' zorgen in mijn hoofd. Ik wist niet goed waar ik moest beginnen qua technische invulling. De knikkerbaan fysiek maken trok mij dan ook het meest. Toch heb ik mezelf op een gegeven moment aan de server gezet en na enige inspanning heb ik daar wel wat aan kunnen doen. Over het algemeen had ik wel moeite met het project, onder andere doordat het af en toe een ver-van-mijn-bedshow leek. Toch hebben we met z'n allen een resultaat neergezet naar ons kunnen. De communicatie en hulp die we elkaar boden in de groepsapp was daarbij erg fijn en is best aardig verlopen.

#### Anna Marie Inberg
Deze eindopdracht was een uitdaging op vele vlakken. Allereerst was de communicatie moeilijk. Aan het begin omdat ik in een andere klas zat. Ik dacht dat dit geen probleem zou zijn maar tijdens de les alleen de server proberen te begrijpen en eraan werken was moeilijker dan gedacht. Zelfs met uitleg van Meneer Cammeraad, in zowat elk lesuur over de server, bleef dit erg moeilijk. Samen afspreken was ook moeilijk door verschillende roosters. Daarna kwam corona wat het nog meer compliceerde. Uiteindelijk is dit wel goedgekomen. Ik vond ook de server zeer moeilijk om te begrijpen. Na vele keren uitleg te hebben gekregen en ondersteuning door filpjes en onderzoek op internet was het nog moeilijk om de code hiervoor tot stand te brengen. Met hulp van elkaar hebben we toch een poging gedaan en ik ben trots op iedereen zijn werk. 

#### Chimène Goeptar
Als ik terug kijk op dit project ben ik niet heel erg tevreden. Ik heb namelijk het gevoel dat dit project van te hoog niveau voor ons is en we niet genoeg kennis beschikken om dit project goed te kunnen uitvoeren. Ik heb de uitleg van de server van meneer Cammeraat vier keer bijgewoond maar wist daarna alsnog elke keer niet wat ik met de code aanmoest. Ik heb uren naar uitlegvideo’s gekeken en informatie opgezocht op internet, maar ik bleef verdwalen in de code en het volledige systeem. Ook heb ik meerdere ICT’ers met een Javascript basis gebeld en gevraagd om hulp, maar ook dat leverde niets op. Uiteindelijk dacht ik de communicatie tussen de widget en de server te snappen, dus ben ik aan de slag gegaan met het maken van nieuwe requests maar ook die kon ik helaas niet afmaken omdat ik niet wist hoe ik verder moest. We hebben elkaar vaak geprobeerd te helpen, maar omdat niemand voor lange tijd de widget of de server snapte, liep ik telkens tegen een dood einde aan. Uiteindelijk hebben we onze code voor het koppelen van de arduino, server en widget zo ver mogelijk uitgewerkt in pages, aangezien we wisten dat het waarschijnlijk niet ging werken. Op deze manier wilden we laten zien wat we van plan waren, hoe ver we waren gekomen en dat we erg hard hebben geprobeerd om alles werkend en kloppend te maken. Ik ben dan ook erg trots op alles wat ons is gelukt, zoals het maken van de fysieke knikkerbaan, onze code in arduino en onze geprobeerde code voor de koppelingen in pages.


#### Anouk Essers
Aan het begin vond ik deze opdracht erg leuk klinken. Toen we eenmaal aan de slag gingen vond ik het erg moeilijk. Ik was verantwoordelijk voor de arduino. Dit deed ik samen met Lisa en Jasmijn. We hadden hier best veel moeite mee, maar uiteindelijk is dit redelijk gelukt. Verder vond ik de opdracht erg lastig. Ik vond het vooral lastig om alle verschillende onderdelen met elkaar te combineren en hier een samenhang in te zien. Ik had het gevoel dat wij niet alle kennis hadden om deze opdracht goed uit te voeren. Ook was een goede commincatie moeilijk. Uiteindelijk is het met de commincatie goed verlopen met behulp van de groepsapp die we met elkaar hadden. We hebben allemaal heel erg ons best gedaan voor dit project.



## Slot
De twee grootste problemen die wij hadden tijdens dit project waren: het gebrek aan kennis en de moeilijke organisatie door de lockdown. We hebben veel moeite gestopt in het oplossen van deze problemen. De organisatie en samenwerking is daarom toch goed verlopen. Ook onze kennis hebben we  flink bijgespijkerd en we hebben geprobeerd het beste van het project te maken.
