<template>
  <div class="container">
    <h1>Sandrine Prumpeler | Software Developer</h1>
    <div class="row">
      <div class="kolom">
        <div class="blok" v-for="(button, index) in buttons" :key="'k1-' + index">
          <router-link :to="button.link" class="hoofdknop">
            <div class="titel">{{ button.titel }}</div>
            <div class="onderdelen">
              <div class="onderdeel" v-for="(onderdeel, i) in button.onderdelen" :key="i">
                {{ onderdeel }}
              </div>
            </div>
          </router-link>
        </div>
      </div>

      <div class="kolom">
        <div class="blok" v-for="(button, index) in buttonsK2" :key="'k2-' + index">
          <router-link :to="button.link" class="hoofdknop">
            <div class="titel">{{ button.titel }}</div>
            <div class="onderdelen">
              <div class="onderdeel" v-for="(onderdeel, i) in button.onderdelen" :key="i">
                {{ onderdeel }}
              </div>
            </div>
          </router-link>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
import '../styles/home.css';
export default {
  name: 'App',
  data() {
    return {
      buttons: [
        { titel: 'B1-K1-W1', onderdelen: ['Eisen en wensen in user stories', 'Kwaliteit van de user stories', 'Planning op basis van user stories', 'Voortgang en gemaakte keuzes'], link: '/pageW1' },
        { titel: 'B1-K1-W2', onderdelen: ['Vertaling van user stories naar ontwerp', 'Toegepaste schema’s en ontwerptechnieken', 'Documentatie', 'Onderbouwing van ontwerpkeuzes'], link: '/pageW2' },
        { titel: 'B1-K1-W3', onderdelen: ['User stories gerealiseerd binnen geplande tijd', 'Functionaliteiten volgens user stories', 'Kwaliteit van de code', 'Code conventions', 'Code is verzorgd, leesbaar en voorzien van commentaar', 'Effectief versiebeheer'], link: '/pageW3' },
        { titel: 'B1-K1-W4', onderdelen: ['Testcases en Testplan sluiten aan op user stories', 'Teststappen, gewenste resultaten en testdata', 'Testrapport en conclusies'], link: '/pageW4' },
        { titel: 'B1-K1-W5', onderdelen: ['Verbetervoorstellen vanuit testen', 'Verbetervoorstellen vanuit oplevering', 'Verbetervoorstellen vanuit reflectie'], link: '/pageW5' },
    ],
    buttonsK2: [
        { titel: 'B1-K2-W1', onderdelen: ['Actief deelnemen met relevante onderwerpen.', 'Regelmatig en tijdig afstemmen over voortgang.', 'Afspraken eenduidig vastleggen.', 'Zich houden aan gemaakte afspraken.'], link: '/pageW6' },
        { titel: 'B1-K2-W2', onderdelen: ['Overtuigend en duidelijk presenteren.', 'Gerichte vragen stellen voor begrip.', 'Adequaat reageren op feedback.'], link: '/pageW7' },
        { titel: 'B1-K2-W3', onderdelen: ['Positieve en verbeterpunten benoemen.', 'Adequaat reageren op feedback.', 'Actieve houding tijdens reflecties.'], link: '/pageW8' },

        { titel: 'buasIntake', onderdelen: ['Creative Media and Game Technolegies.', 'Bachelor', '4 jaar', 'Voltijd', 'Engels', 'Start 1 september 2026'], link: '/buasIntake' }
      ]
    };
  }
};
</script>