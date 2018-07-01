# Log


###### Woensdag 21 februari:
  * Eerste poging om de Bela werkend te krijgen, hiervoor moet er een Bela-image op een micro-SD-kaart staan. Omdat voor elkaar te krijgen moest de image geflasht worden op het SD-kaartje, dit duurde helaas zo lang dat ik de procedure op m'n laptop moest afbreken omdat de les afgelopen was.

###### Zaterdag 24 februari:
  * De vorige poging om de Bela werkend te krijgen was dus niet gelukt. Omdat ik nu thuis was en de computer lang kon laten draaien heb ik de procedure als hierboven omschreven opnieuw gedaan, ditmaal met meer succes.
  * Nadat het flashen gelukt was heb ik de andere 'getting started' stappen op de Bela site gevolgd en zo kwam ik in de Bela-editor terecht. Ik zag dat door al wat voorbeeld stonden en die heb gerund om te testen of het allemaal werkte, en dat deed het.

###### dinsdag 27 februari:
  * Ik ben opzoek gegaan naar meer informatie over het aansluiten van Piëzo-elementen op de Bela, hier heb ik nu wel een duidelijk schema van gevonden. Om het te kunnen aansluiten heb ik naast de Piëzo-elementen ook weerstandjes nodig.

###### donderdag 29 februari:
  * Om advies gevraagd op het Bela forum, helaas waren alle suggesties vrij duur. Met een snelle rekensom kwamen sommige opties boven de 350 euro uit. Daarnaast kwam ik er ook achter dat het toch behoorlijk lastig is om het zo te maken dat het ook echt praktisch wordt in het gebruik. De Bela is een beetje aan de grote kant en daardoor is het ook niet mogelijk om hem in de gitaar in te bouwen, het volgende probleem is dat de Bela ook nog met de computer zou moeten communiceren. het meest praktische zou dan draadloos zijn maar ook dit kost dan natuurlijk extra. Alles bij elkaar wordt het dan zo duur dat het geen rendabel project zou zijn.

###### dinsdag 19 juni:
  * Om de redenen die ik hiervoor heb genoemd heb ik besloten om het over een andere boeg te gooien. Ik heb besloten om de Bela te gebruiken om een gitaarpedaal te maken. Ik heb al een aantal audio effect plugins gemaakt en het zou heel tof zijn als ik die op een hardware apparaat kan gaan draaien.
  * In het begin had ik problemen met het compileren van de code. Hij sloeg de code niet op en registreerde geen veranderingen in de .cpp files. Nadat ik de Bela had gereset was dit probleem opgelost.
  * Ik ben begonnen met wat voorbeelden doorlezen. Eentje hiervan ging over het verbinden van potmeters aan de Bela en deze mappen aan bepaalde parameters.
  De andere was een simpele uitleg van hoe je de render.cpp file kan gebruiken om de audio input door te sturen naar de output(zonder klank bewerking dus).
  Deze twee voorbeelden heb ik gecombineerd met mijn code van een ringmodulator plugin. Ik moet nog een aantal zaken implementeren maar de ringmodulator doet het al wel. Ik kan nu ook de parameters aansturen met de potmeters, hiervoor heb ik 6 10k potmeters aan de analog in van de Bela gehangen.
  * Om the testen of alle potmeters goed werkte heb ik aan aantal sinus oscillatoren aangemaakt en de potmeters gemapt aan het volume en de frequency van de sinustonen.
  * Om een idee te krijgen van het formaat van de behuizingen heb ik de potmeters vast gemaakt aan een kartonnen doosje en de Bela hierin gelegd.

  <img src="https://raw.githubusercontent.com/BramGiesen/Bela-Project-/master/images/foto1.JPG" style="width:77%">

  <img src="https://raw.githubusercontent.com/BramGiesen/Bela-Project-/master/images/foto2.JPG" style="width:77%">


###### donderdag 21 juni:

  * In de werkplaats begonnen aan een stalen behuizing.
  * Ik merkte dat ik een paar keer een beetje te snel wilde gaan waardoor ik bepaalde technieken niet eerst op een sample had getest. Dit wil ik de volgende keer wel doen. Ik de vouwen van het bakje nu iets de wijd gemaakt. Dit is ook later niet meer goed te corrigeren.
  Ik heb dit opgelost door er hoekjes in te zetten, maar het was natuurlijk makkelijker om het in één keer goed te doen.

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto3.JPG?raw=true" style="width:77%">



###### vrijdag 22 juni:
  * Verder gegaan aan de behuizing. Steuntjes in het bakjes gelast om de boven plaat te ondersteunen en ervoor te zorgen dat de bovenplaat vast te schroeven is. Ik heb onder de steuntjes een moertje gelast om hier de bout in vast te kunnen zetten. Dit was uiteindelijke het meeste werk omdat dit vrij precies moet passen. Om dit voor elkaar te krijgen heb ik best lang moeten vijlen om wat randjes weg te halen.
  * Ik heb de hoekjes opgevuld met laspunten en deze daarna glad geschuurd.
  * als laatste heb ik alles nog gezandstraald om het later te verven.

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto4.JPG?raw=true" style="width:77%">

##### zondag 24 juni:
  * Het bakje gespoten, eerst een grond laag en daarna zwarte verf.
  * Kwam er bij het in elkaar zetten achter dat de potmeter waarmee ik de alle gaatjes had getest net een fractie kleiner is dan de andere potmeters(wel allemaal hetzelfde model). Om ze allemaal goed te laten passen moet ik nog wat gaatjes uitvijlen(de knopjes op de foto liggen er nog los op).

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto11.JPG?raw=true" style="width:77%">

##### maandag 25 juni:
  * schema gemaakt in Fritzing.
  * layout gemaakt voor de binnenkant. Potmeters worden op z'n plek gehouden door een kartonnen doosje binnen in de metalen case. Op de bodem heb ik karton en isolatietape bevestigd.
  * Het aantal snoertjes en de omvang van het binnenwerk heb ik wel een beetje onderschat. Het past wel maar het was toch wel wat proppen en zoeken naar hoe alles het beste in de case kan worden bevestigd. Ik had van te voren wel wat kleine voorbeelden uit karton gemaakt om zo een inschatting te kunnen maken de omvang van het binnen werk maar voor de volgende keer(dit was deze keer niet mogelijk wegens het sluiten van de werkplaats)zou ik eerst het hele binnenwerk maken en dan pas de behuizing.

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/Bela_pedal.png?raw=true" style="width:77%">



##### dinsdag 26 juni:
  * Heb de switches getest met een pull-up resistor systeem. Deze werken goed.
  * Nu ik alle componenten heb getest heb ik een begin gemaakt om deze op een printplaat te solderen. Het soldeertin was behoorlijk klonterig en een beetje broos dus ik ga morgen checken of dit wel de juiste soort is om dit te doen en dan ga ik vervolgens alles in elkaar zetten.
  * Een ander probleem waar ik tegenaan ben gelopen is de gaten aan de zijkant voor de usb en de adapter een beetje aan de kleine kant zijn, dit kan ik denk ik oplossen door er verloopjes tussen te zetten.

##### woensdag 27 juni:
  * Vandaag begonnen aan het solderen van de printplaat. Ik ben naar de winkel geweest om wat meer informatie te vragen of geschikt soldeertin en heb nu soldeertin met lood gebruikt. Hiernaast had ik ook een erg matige soldeerbout dus heb ik er eentje gekocht waarbij ik de temperatuur zelf kan instellen.
  * Voor dat met het daadwerkelijke solderen ben begonnen heb ik eerst een tutorial gekeken over solderen, dit hielp wel om wat nettere puntjes te zetten. Na een aantal keer uitproberen op een test print plaatje ben ik begonnen met de echte printplaat.
  * Na dat alles in elkaar zat ben ik een test gaan doen om te kijken of alles het goed deed. Toen kwam ik erachter dat twee knoppen het niet goed deden en toen ben ik de verbindingen door gaan meten en toen kwam ik op twee slechte verbindingen uit die ik hierna nog een keer heb gesoldeerd.
  * Hierna heb ik de Bela audiokabels vervangen met 2x mono jack en toen heb ik het systeem getest met een gitaar, dit werkte goed. Als laatste heb ik de Bela getest met een usb-charger zodat ik geen computer meer nodig heb om het te runnen, dit werkt ook goed. In het menu van de Bela kan je ook aangeven welk project hij moet opstarten als hij wordt geboot dus dat werkt erg makkelijk.
  * De laatste stap is om alle electronica in de behuizing te plaatsen.

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto6.JPG?raw=true" style="width:77%">

##### zaterdag 1 juli:

  * Begonnen met het verkorten van een USB-verloopje.
  * Hierna heb ik deze in de case gelegd met de bela en de jack-inputs en gekeken om te kijken of het allemaal werkte.
  * Vervolgens heb ik de electronica die ik al had gesoldeerd erover heen gelegd en aangesloten. het was nog wel even passen en meten om alles goed in case te krijgen. Voor de volgende keer zou ik graag in de werkplaats een plastic bakje maken voor de Bela en dan daar ook de potmeters op de bevestigen en de switches op de printplaat solderen waardoor ik alles op de deksel zou kunnen monteren. Omdat de werkplaatsen al gesloten zijn heb ik nu veel met karton en tape gedaan aan de binnenkant, werkt ook is alleen we iets minder mooi.  
  * Ook zou het overzichtelijker geweest zijn om alle kabels die van de potmeters naar de printplaat gaan samen te binden en langs te zijkanten te leggen, het is nu een beetje een snoerensoep.

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto7.JPG?raw=true" style="width:77%">

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto8.JPG?raw=true" style="width:77%">

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto9.JPG?raw=true" style="width:77%">

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto10.JPG?raw=true" style="width:77%">


## Wat heb ik geleerd?
  * Ik heb tot nu toe erg weinig met hardware/elektronica gedaan. Voor mij was het erg nuttig om zo'n project te doen en hier zelf informatie over op te zoeken. Nu ik dit een keer heb gedaan is de drempel ook een stuk lager geworden om nog een keer wat met hardware te gaan doen.
  * Ik dacht dat ik wel wist hoe ik moest solderen maar hier heb ik ook wat verdere informatie over opgezocht. Naast de techniek van het solderen wist ik eigenlijk nog niks over welk soldeertin goed was om te gebruiken en welke niet. Doordat ik merkte dat het met het spul dat ik thuis had liggen niet zo goed ging en toen dus ben gaan informeren wat wel geschikt zou zijn heb ik hier ook meer inzicht in gekregen.
  * Ik heb ook meer inzicht gekregen in hoe ik zo'n project het beste kan aanpakken en wat ik de volgende keer anders zou doen.
  Ik had nu al wel een stukje van de behuizing eerst van karton gemaakt om een idee te krijgen maar voor de volgende keer zou ik eerst het hele binnenwerk uitdenken. Vervolgens een kartonnen behuizingen maken en dan als laatste de metalen behuizing. Dit zou ik zo doen omdat ik tijdens dit project heb gemerkt dat het toch lastig is om van te voren precies in te schatten hoeveel ruimte je nodig gaat hebben en dat er toch wel vaak nog dingetjes bij kwamen waar ik geen rekening mee had gehouden.
  * Hiernaast heb ik ook gemerkt dat het belangrijk is om secuur te werken en eerst een paar testertjes te maken voordat je aan het echte werk begint. Omdat ik dit al constateerde tijdens het maken van de behuizing heb ik dat daarna wel toegepast.
  * Ook het gebruik van goed materiaal en goede kabels is belangrijk. Ik had voor een paar dingetjes een beetje fragiele kabeltjes gebruikt, en daarna ook meteen gemerkt dat deze gingen afbreken of storen. Omdat het toch behoorlijk irritant is om deze dingen op te moeten lossen is het toch een stuk prettiger om meteen goed materiaal te gebruiken zodat je niet later nog bezig bent met het repareren van je eigen project. Hiernaast zou ik dit pedaal ook wel live willen gebruiken met mijn band en dan zijn dit soort dingen zeker belangrijk omdat je er wel van op aan moet kunnen dat het allemaal werkt en blijft werken.
  * Ik ben al met al erg tevreden met het resultaat en ik vind het erg leuk dat ik de effecten die ik op mijn computer maak nu ook op dit ding kan zetten en dus geen computer meer hoef mee te nemen als ik deze effecten buitenhuis wil gebruiken.

  ter afsluiting heb ik ook nog een korte demonstratie video opgenomen van het gitaarpedaal. De video is hier te vinden: http://studenthome.hku.nl/~bram.giesen/BelaGuitarEffectPedal_v3.mp4
