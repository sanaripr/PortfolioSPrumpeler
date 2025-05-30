<template>
  <div class="page-W1">
    <router-link to="/" class="terug-knop">Terug naar Home</router-link>
    <br /><br /><br />
    <h1>B1-K2-W1 | Beoordeling overleggen</h1>

    <div class="flex-container">
      <div class="left-column">
        <div class="text-block">
            <h2>Actieve deelname</h2>
            <p>Beoordelingseisen:
                <br />
                <strong>Volledig:</strong> De kandidaat neemt actief deel aan het overleg waarbij relevante onderwerpen worden ingebracht en de juiste vragen worden gesteld.
            </p>
          <video controls style="width: 100%; max-width: 500px; margin-top: 10px;">
            <source src="/images/FeedBack/KlantenGesprek08-05-2025.mp4" type="video/mp4" />
        </video>
        </div>
        <br />


        <div class="text-block">
        <h2>Afstemmen</h2>
        <p>Beoordelingseisen:
            <br />
            <strong>Volledig:</strong> De kandidaat stemt Regelmatig en tijdig af met projectteamleden en opdrachtgever over de voortgang en eventuele knelpunten.
        </p>
          <div class="image-preview">
            <img class="Groter" src="images/FeedBack/GroepOverleg.png" alt="Teams berichten" />
            <br />
            <img class="Groter" src="images/FeedBack/MeetingGroep.png" alt="Teams meeting" />
          </div>
        </div>
        <br />



            <div class="text-block">
            <h2>Afspaken vastleggen</h2>
            <p>Beoordelingseisen:
                <br />
                <strong>Volledig:</strong> De gemaakt afspraken zijn eenduidig vastgelegd.
            </p>
          <div class="image-preview">
            <img class="Groter" src="images/FeedBack/PlanningK.png" alt="Planning" />
          </div>
        </div>
        <br />



            <div class="text-block">
            <h2>Afspraken nakomen</h2>
            <p>Beoordelingseisen:
                <br />
                <strong>Volledig:</strong> De kandidaat houdt zich aan gemaakte afspraken.
            </p>
            <div class="image-preview">
            <img class="Groter" src="images/FeedBack/Afspraken.png" alt="Teams" />
            </div>
        </div>
      </div>





      <div class="right-column">
        <h2>Bewijsstukken</h2>
        <p>Bekijk hieronder de documenten:</p>
        <h3>Klanten gesprek</h3>
          <iframe
            src="/doc/FB/Notaties_KlantenGesprek0805.pdf"
            width="100%"
            height="450px"
            frameborder="0"
            class="doc-iframe"
        ></iframe>

        <h3>Beoordelings formulier</h3>
        <iframe
          src="/doc/TenV/Beoordeling.pdf"
          width="100%"
          height="450px"
          frameborder="0"
          class="doc-iframe"
        ></iframe>
      </div>
    </div>
  </div>
</template>

<script>
export default {
  name: 'PageW1B1K2',
};
</script>

<style scoped>
.page-W1 {
  color: white;
  padding: 40px;
  max-width: 1300px;
  margin: 0 auto;
  font-family: sans-serif;
}

h1 {
  margin-bottom: 20px;
  color: #ffcad4;
}

h2 {
  margin-top: 30px;
  color: #ffd6e0;
}

h3 {
    margin-bottom: -10px;
}

a {
  color: #ffd6e0;
  text-decoration: underline;
}

.flex-container {
  display: flex;
  gap: 40px;
  flex-wrap: wrap;
}

.left-column {
  flex: 1 1 60%;
}

.right-column {
  flex: 1 1 35%;
}

.text-block {
  margin-bottom: 30px;
  line-height: 1.6;
}

.image-preview {
  margin-top: 20px;
  border-radius: 8px;
  overflow: hidden;
  width: 775px;
}

.image-preview img {
  width: 100%;
  height: auto;
  display: block;
  object-fit: cover;
}

.Groter {
  max-width: 850px;
  width: 100%;
  height: auto;
}



.doc-iframe {
  margin-top: 20px;
  border: 2px solid #ffd6e0;
  border-radius: 8px;
  width: 100%;
  height: 450px;
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
