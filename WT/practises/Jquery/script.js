$(document).ready(() => {
  $("#show").hide();
  $(".toggle").click(() => {
    $("h1").toggle();
    $("#hide").toggle();
    $("#show").toggle();
  });

  $("#showPass").click(() => {
    $("#password").toggle();
  });
});
