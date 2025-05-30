<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>

    <h1>B1-K2-W2 | Beoordeling (deel)oplevering</h1>

        <div class="text-block">
            <h2>Presentatie inhoud</h2>
            <p>Beoordelingseisen:
                <br />
                <strong>Volledig:</strong> De kandidaat legt de functionaliteit uit met goed opgebouwd en met argumenten onderbouwt verhaal.
            </p>
      <iframe
        src="/doc/BA/.pdf"
        width="100%"
        height="600px"
        frameborder="0"
        class="pdf-viewer"
      ></iframe>
    </div>


        <div class="text-block">
        <h2>Presentatietechnieken</h2>
        <p>Beoordelingseisen:
            <strong>Volledig:</strong> De kandidaat stemt de stijl van communiceren en de presentatiemiddelen af op de toehoorders.
        </p>
        </div>

    <img src="/doc/uitnodiging-mail.jpg" alt="E-mail uitnodiging" />

    <div class="text-block">
        <h2>beantwoorden vragen</h2>
        <p>Beoordelingseisen:
        <br />
        <strong>Volledig:</strong> De kandidaat beantwoord vragen met steekhoudende argumenten.
        </p>
    </div>
  </div>
</template>

<script>
export default {
  name: "PageK2W2",
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

img {
  max-width: 100%;
  border-radius: 8px;
  margin-bottom: 30px;
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

.pdf-viewer {
  border: none;
  border-radius: 6px;
  box-shadow: 0 0 6px #bb657a;
  margin-top: 20px;
}
</style>
