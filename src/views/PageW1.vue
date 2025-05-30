<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    <h1>B1-K1-W1</h1>

    <div class="text-block">
      <h2>Eisen en wensen</h2>
      <p>
        De eisen en wensen zijn volledig verwerkt in de user stories. Dit is terug te vinden in zowel het Trello board als het Behoefte Analyse document (BA).
      </p>
      <p>
        Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De uitgangspunten, Technische en Functionele eisen wensen zijn bepaald en gedocumenteerd.
      </p>

      <p><strong>Bewijsstukken:</strong></p>
      <ul>
        <li>
          <a href="https://trello.com/b/8T3gzD7w/portfolio-chirs" target="_blank" rel="noopener noreferrer">
            <strong>Trello board</strong> | ChrisPortfolio
          </a>
        </li>
      </ul>

      <div class="documents-wrapper">
        <div class="documents-column">
          <div
            v-for="(doc, index) in documents"
            :key="index"
            class="document-container"
          >
            <h3>{{ doc.title }}</h3>
            <iframe
              :src="doc.src"
              width="100%"
              height="500px"
            frameborder="0"
          ></iframe>
          </div>
        </div>
      </div>
    </div>

    <br />
    <div class="text-block">
      <h2>Planning</h2>
      <p>
        De Trello-planning laat zien welke functies wanneer worden uitgewerkt, gebaseerd op de belangrijkste onderdelen van het project.
      </p>
      <p>
        Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Op basis van de Functionaliteit is een complete en realistische planning gemaakt.
      </p>
      <p><strong>Bewijsstuk:</strong></p>
      <ul>
        <li>
          <a href="https://trello.com/b/wXNOVcTn/kembit" target="_blank" rel="noopener noreferrer">
            <strong>Trello board</strong> | The KEMBIT Times 1.0
          </a>
        </li>
      </ul>
    </div>

    <br />
    <div class="text-block">
      <h2>Bewaken voortgang</h2>
      <p>
          De Trello-bord is goed bijgehouden, alle wijzigingen in de planning zijn duidelijk genoteerd.
      </p>
        <p>
        Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De gestelde doelen en planningen zijn bewaakt.
      </p>
      <p><strong>Bewijsstuk:</strong></p>
      <ul>
        <li>
          <a href="https://trello.com/b/mcqUSTDm/stage-opdracht" target="_blank" rel="noopener noreferrer">
            <strong>Trello board</strong> | The KEMBIT Times 2.0
          </a>
        </li>
      </ul>
      <br />
    </div>

    
  </div>
</template>

<script>
export default {
  name: 'PageW1',
  data() {
    return {
      documents: [
        {
          title: "Behoefte Analyse | ChrisPortfolio",
          src: "/doc/BA/Behoeftealalyse ChrisPortfolio.pdf",
        },
      ],
    };
  },
};
</script>

<style scoped>
.page-W1 {
  color: white;
  padding: 40px;
  max-width: 850px;
  margin: 0 auto;
  font-family: sans-serif;
}

h1 {
  margin-bottom: 20px;
  color: #ffcad4;
  margin-bottom: -10px;
}

h2 {
  margin-top: 30px;
  color: #ffd6e0;
}

h3 {
  margin-top: 10px;
  color: #ffb6c1;
}

a {
  color: #ffd6e0;
  text-decoration: underline;
}

.text-block {
  margin-bottom: 30px;
  line-height: 1.6;
}

.documents-wrapper {
  max-width: 100%;
  overflow-x: auto;
  display: flex;
  justify-content: center;
}

.documents-column { 
  display: flex;
  flex-wrap: nowrap;
  gap: 30px;
  padding-bottom: 10px;
  min-width: max-content;
}

.document-container {
  background-color: #330c1a;
  padding: 20px;
  border-radius: 8px;
  border: 2px solid #bb657a;
  flex: 0 0 750px;
  width: 750px;
}

.terug-knop {
  display: inline-block;
  margin-left: -250px;
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