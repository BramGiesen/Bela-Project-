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

  <img src="https://github.com/BramGiesen/Bela-Project-/blob/master/images/foto5.JPG?raw=true" style="width:77%">

##### maandag 25 juni:
  * layout gemaakt voor de binnenkant. Potmeters worden op z'n plek gehouden door een kartonnen doosje binnen in de metalen case. Op de bodem heb ik karton en isolatietape bevestigd.
  * Het aantal snoertjes en de omvang van het binnenwerk heb ik wel een beetje onderschat. Het past wel maar het was toch wel wat proppen en zoeken naar hoe alles het beste in de case kan worden bevestigd. Ik had van te voren wel wat kleine voorbeelden uit karton gemaakt om zo een inschatting te kunnen maken de omvang van het binnen werk maar voor de volgende keer(dit was deze keer niet mogelijk wegens het sluiten van de werkplaats)zou ik eerst het hele binnenwerk maken en dan pas de behuizing.

##### dinsdag 26 juni:
  * Heb de switches getest met een pull-up resistor systeem. Deze werken goed.
  * Nu ik alle componenten heb getest heb ik een begin gemaakt om deze op een printplaat te solderen. Het soldeertin was behoorlijk klonterig en een beetje broos dus ik ga morgen checken of dit wel de juiste soort is om dit te doen en dan ga ik vervolgens alles in elkaar zetten.
  * Een ander probleem waar ik tegenaan ben gelopen is de gaten aan de zijkant voor de usb en de adapter een beetje aan de kleine kant zijn, dit kan ik denk ik oplossen door er verloopjes tussen te zetten.
