function main() {
  $('.button').on('click', function() {
    $(this).toggleClass('active');
});
}

$(document).ready(main);