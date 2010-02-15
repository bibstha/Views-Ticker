$(document).ready(function() {
  if ($("#news-ticker").length > 0) {
    if (null == Drupal.settings.views_ticker.speed) {
      speed = 0.07;
    } else {
      speed = Drupal.settings.views_ticker.speed;
    }
    $("#news-ticker").liScroll({travelocity: speed});
  }
});