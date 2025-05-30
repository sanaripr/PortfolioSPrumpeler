<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    <h1>B1-K1-W5</h1>

    <div class="text-block">
      <h2>Analyseren</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Analyseert systematisch alle beschikbare informatiebronnen voor mogelijke aanpassingen aan de software.
      </p>
    </div>

    <div class="text-block">
      <h2>Verbetervoorstellen</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Interpreteert en vertaalt wensen, reacties, testresultaten en/of meldingen naar realiseerbare Verbetervoorstellen.
      </p>
    </div>

    <div class="text-block">
      <h2>Planning</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Stelt vast welke werkzaamheden benodigd zijn, evenals een haalbare planning.
      </p>
    </div>


    <iframe :src="documents[0].src" class="doc-iframe" frameborder="0"></iframe>
  </div>
</template>

<script>
export default {
  name: 'PageFive',
  data() {
    return {
      documents: [
        {
          title: "KEMBIT Verbetervoorstellen Document",
          src: "/doc/TenV/Verbeter_TheKEMBITTimes.pdf",
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
  font-family: sans-serif;
  max-width: 900px;
  margin: 0 auto;
}

h1 {
  color: white;
  margin-bottom: 30px;
  font-size: 28px;
}

h2 {
  margin-top: 30px;
  color: white;
  font-size: 20px;
}

h3 {
  margin-top: 10px;
  color: #ffb6c1;
  font-weight: 600;
}

.text-block {
  margin-bottom: 40px;
  line-height: 1.6;
}

.doc-iframe {
  width: 100%;
  height: 600px;
  margin-top: 30px;
  border: none;
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
