<template>
  <div class="page-W2">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    <h1>B1-K1-W2</h1>

    <div class="text-block">
      <h2>Mijn documenten</h2>
      <p>
        Voor sprint 4.2 heb ik ChrisPortfolio opnieuw opgebouwd 
        – deze keer in React – 
        met een sterkere structuur en verbeterde code. 
        Daarnaast heb ik samen met mijn groep bij KEMBIT een nieuwswebsite 
        gemaakt (KEMBIT 1.0). Later hebben we deze uitgebreid en verbeterd 
        tot een nieuwe versie: KEMBIT 2.0, met extra functionaliteiten 
        en een professionelere uitstraling.
      </p>

      <br />
      <h2>Ontwerp</h2>
      <p>
        Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De eisen en wensen zijn vertaald naar een passend, eenduiding en volledig ontwerp.
      </p>
    </div>

    <div class="documents-column">
      <div
        v-for="(doc, index) in documents"
        :key="index"
      >
        <div class="document-container">
          <div class="iframes-block">
            <h3>{{ doc.title }}</h3>
            <iframe
              v-for="(src, i) in doc.iframes"
              :key="i"
              :src="src"
              width="100%"
              height="400px"
              frameborder="0"
            ></iframe>
          </div>

          <div class="side-block">
            <div class="buttons">
              <button
                v-for="(btn, i) in doc.buttons"
                :key="i"
                @click="() => updateSelectedImage(index, i)"
                :class="{ active: selectedImages[index] === i }"
              >
                {{ btn }}
              </button>
            </div>

            <img
              :src="doc.images[selectedImages[index]]"
              alt="afbeelding"
            />
          </div>
        </div>

        <!-- Extra tekst tussen document 2 en 3 -->
        <div
          v-if="index === 1"
          class="extra-text-block"
        >
          <br /><br /><br /><br />
          <H2>Schematechnieken</H2>
      <p>
        Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Er zijn gebruik gemaakt van relevante of toepasselijke Schematechnieken (bijv. activiteitendiagram, klassendiagram, ERD use case diagram)
      </p>
        </div>
        <!-- Extra tekst tussen document 4 en 5 -->
        <div
          v-if="index === 3"
          class="extra-text-block"
        >
          <br /><br /><br />
          <H2>Onderbouwing</H2>
          <p>
            Beoordelingseisen:
            <br />
            <strong>Volledig:</strong> De gemaakte keuzes in het ontwerp zijn onderbouwd met steekhoudende argumenten, waarbij rekening is gehouden met haalbaarbeid, privacy en security.
          </p>
        </div>
      </div>
    </div>

    <br /><br /><br />
  </div>
</template>

<script>
export default {
  name: "PageTwo",
  data() {
    return {
      documents: [
        // Document 1
        {
          title: "Behoefte Analyse, Portfolio website | voor Christian Schroth",
          iframes: ["/doc/BA/Behoeftealalyse ChrisPortfolio.pdf"],
          buttons: [
            "Intro | Page",
            "Over mij | Page",
            "Mijn skills | Page",
            "Contact form | Page",
          ],
          images: [
            "/images/WebChris/CP-MockUp1.png",
            "/images/WebChris/CP-MockUp2.png",
            "/images/WebChris/CP-MockUp3.png",
            "/images/WebChris/CP-MockUp4.png",
          ],
        },
        // Document 2
        {
          title: "Behoefte Analyse, The KEMBIT Times | 1.0",
          iframes: ["/doc/BA/behoefteanalyse_TheKEMBITTimes.pdf"],
          buttons: [
            "Home | Mock-Up",
            "Login | Mock-Up",
            "Reistreer | Mock-Up",
            "Publiceer | Mock-Up",
          ],
          images: [
            "/images/WebKEMBIT/HomeK1.png",
            "/images/WebKEMBIT/RegistreerLK1.png",
            "/images/WebKEMBIT/SubK1.png",
            "/images/WebKEMBIT/HomeNewsK1.png",
          ],
        },
        // Document 3
                {
          title: "Funtioneel Ontwerp, The KEMBIT Times | 1.0",
          iframes: ["/doc/FO/FunctioneelOntwerp_TheKEMBITTimes.pdf"],
          buttons: [
            "Fetch | UI", //////// Pas naam aan
            "Search| UI",/////// Pas naam aan
            "News | UI",/////// Pas naam aan
            "Pager| UI",/////// Pas naam aan
          ],
          images: [
            "/images/Doc/FetchSortK1.png",
            "/images/Doc/SearchNewsK1.png",
            "/images/Doc/NewsK1.png",
            "/images/Doc/PagerK1.png",
          ],
        },
        // Document 4
        {
          title: "Functioneel Ontwerp, The KEMBIT Times | 2.0",
          iframes: ["/doc/FO/FunctioneelOntwerp_TKT-05.pdf"],
          buttons: [
            "Start | Feeder",////// Pas naam aan
            "Loop | Feeder",////// Pas naam aan
            "Verwerkingen | Feeder",////// Pas naam aan
            "News tekst | Feeder",////// Pas naam aan
          ],
          images: [
            "/images/Doc/FeederStartK2.png",
            "/images/Doc/FeederLoopK2.png",
            "/images/Doc/FeederVerwerkingenK3.png",
            "/images/Doc/FeederNewsTekstK3.png",
          ],
        },

        // Document 5
        {
          title: "Technisch Ontwerp, The KEMBIT Times | 1.0",
          iframes: ["/doc/TO/TechnischOntwerp_TheKembitTimes_2.0.pdf"],
          buttons: [
            "Activiteiten Diagram",
            "DataSchema",
            "WireFrame",
            "Mock-up",
          ],
          images: [
            "/images/Doc/ActiviteitenDiagramTheKembitTimes.png",
            "/images/Doc/TheKembitTimes.png",
            "/images/Doc/WireFrame_K2.png",
            "/images/WebKembit/HomeK1-MU.png",
          ],
        },
        // Document 6
                {
          title: "Technisch Ontwerp, The KEMBIT Times  | 2.0",
          iframes: ["/doc/TO/TechnischOntwerp_TKT-05.pdf"],
          buttons: [
            "Activiteiten Diagram",
            "DataSchema",
            "WireFrame",
            "Componenten Diagram",
          ],
          images: [
            "/images/Doc/ActiviteitenDiagram_TheKembitTimes_2.0.png",
            "/images/Doc/RelationeelDataK2.png",
            "/images/Doc/WireFrame_K1.png",
            "/images/Doc/ComponentenDiagramk2.png",
          ],
        },
      ],
      selectedImages: Array(6).fill(0),
    };
  },
  methods: {
    updateSelectedImage(docIndex, imageIndex) {
      this.selectedImages.splice(docIndex, 1, imageIndex);
    },
  },
};
</script>

<style scoped>
.page-W2 {
  color: white;
  padding: 40px 20px;
  max-width: 1400px;
  margin: 0 auto;
  font-family: sans-serif;
}

h1 {
  margin-bottom: 20px;
  color: #ffcad4;
}

h2,
h3 {
  text-align: center;
  color: #ffd6e0;
  margin-top: 20px;
}

p,
ul,
li {
  text-align: center;
}

ul {
  list-style-position: inside;
  padding: 0;
}

li {
  display: list-item;
}

.text-block {
  margin-bottom: 30px;
  line-height: 1.6;
}

.documents-column {
  display: flex;
  flex-direction: column;
  gap: 50px;
}

.document-container {
  display: flex;
  gap: 10px;
  align-items: flex-start;
  flex-wrap: nowrap;
}

.iframes-block {
  flex: 2;
  min-width: 400px;
  display: flex;
  flex-direction: column;
  gap: 12px;
}

.side-block {
  flex: 1;
  min-width: 700px;
  display: flex;
  flex-direction: column;
  align-items: flex-start;
  gap: 10px;
  width: 100%;
  margin-top: 85px;
  margin-left: -750px;
}

.side-block img {
  width: 100%;
  border-radius: 8px;
  object-fit: contain;
}

.iframes-block iframe {
  width: 650px;
  height: 550px;
  border: none;
  border-radius: 8px;
}

.buttons {
  display: flex;
  flex-wrap: wrap;
  gap: 10px;
  justify-content: flex-start;
  width: 100%;
}

.buttons button {
  padding: 10px 14px;
  font-size: 14px;
  background-color: #444;
  border: none;
  color: white;
  border-radius: 6px;
  cursor: pointer;
  transition: background-color 0.3s ease;
}

.buttons button:hover {
  background-color: #666;
}

.buttons button.active {
  background-color: #ffcad4;
  color: black;
  font-weight: bold;
}

.extra-text-block {
  text-align: center;
  padding: 10px;
  margin: 30px 0;
  margin-bottom: -80px;
}

.terug-knop {
  display: inline-block;
  margin-left: -50px;
  padding: 12px 24px;
  background-color: #76273a;
  color: white;
  border-radius: 8px;
  text-decoration: none;
  font-weight: bold;
  transition: background-color 0.2s ease;
}

.terug-knop:hover {
  background: transparent;
  border: 2px solid #bb657a;
}
</style>
