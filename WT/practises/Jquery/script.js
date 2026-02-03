$(document).ready(() => {
  $("#show").hide();
  $(".toggle").click(() => {
    $("h1").toggle();
    $("#hide").toggle();
    $("#show").toggle();
  });

  let isPass = true;
  $("#showPass").click(() => {
    if (isPass) {
      $("#password").attr("type", "text");
      isPass = false;
    } else {
      $("#password").attr("type", "password");
      isPass = true;
    }
  });
});
