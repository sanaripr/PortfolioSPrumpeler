<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    <h1>B1-K1-W4</h1>

    <div class="text-block">
      <h2>Testplan</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De testcases in het testplan sluiten aan op de functionaliteiten en bevatten alle scenario's.
      </p>
    </div>

    <div class="text-block">
      <h2>Testscenario</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De kandidaat heeft voor alle toegewezen of geplande functionaliteiten Testscenario's of testcases gemaakt.
      </p>
    </div>

    <div class="text-block">
      <h2>Testen</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De kandidaat voert de testactiviteiten correct en volgens het tetstplan uit.
      </p>
    </div>

        <div class="text-block">
      <h2>Testrapport</h2>
      <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> Het testrapport bevat testresultaten van alle functionaliteiten. Allev resultaten worden voorzien van de juiste conclusiers.
      </p>
    </div>

    <iframe :src="documents[0].src" class="doc-iframe"></iframe>
  </div>
</template>

<script>
export default {
  name: 'PageW4',
  data() {
    return {
      documents: [
        {
          title: "KEMBIT UI Testdocument",
          src: "/doc/TenV/Test_TheKEMBITTimes.pdf",
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
  max-width: 900px;
  margin: 0 auto;
  font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

h1 {
  margin-bottom: 10px;
  color: #ffcad4;
  font-weight: 700;
}

h2 {
  margin-top: 30px;
  margin-bottom: -10px;
  color: #ffd6e0;
  font-weight: 600;
}

h3 {
  margin-top: 10px;
  color: #ffb6c1;
  font-weight: 600;
}

a {
  color: #ffd6e0;
  text-decoration: underline;
}

.text-block {
  margin-bottom: 30px;
  line-height: 1.7;
  font-size: 1.1rem;
}

.doc-iframe {
  width: 100%;
  height: 650px;
  border: none;
  border-radius: 8px;
  margin-top: 20px;
  display: block;
}

.terug-knop {
  display: inline-block;
  margin-left: -250px;
  padding: 12px 24px;
  background-color: #76273a;
  color: white;
  border-radius: 8px;
  text-decoration: none;
  font-weight: 700;
  transition: background-color 0.2s ease;
}

.terug-knop:hover {
  background: transparent;
  border: 2px solid #bb657a;
  color: #bb657a;
}
</style>
