(function($){

// Homepage
Drupal.behaviors.demosFilter = {
		
	attach: function (context, settings) {
		
		// Filter by title
		$("#block-demos-filter-demos-filter .text-input-title" ).keyup(function() {
			var typedTitles = $(this).val().split(",");
			typedTitles = cleanFromEmptyChar(typedTitles);
			filterByTitle(typedTitles);
		});
		
		// Filter by type
		$("#block-demos-filter-demos-filter .btn.type-filter").click(function() {
			$(this).toggleClass('choosed');
			var filter_types = getChoosedFilterTypes();
			filterByType(filter_types);
		});
		 
	}
}

function getChoosedFilterTypes() {
	var filter_types = new Array();
	$('#block-demos-filter-demos-filter .btn.type-filter.choosed').each(function() {
		filter_types.push($(this).text());
	});
	
	if(filter_types.length==0) { // No choosed filter mean show all
		$('#block-demos-filter-demos-filter .btn.type-filter').each(function() {
			filter_types.push($(this).text());
		});
	}
	return filter_types;
}

// BY TITLE
function filterByTitle(titles_array) {
	
	var demos = $('.view-d-mos .demos-row');
	demos.each(function() {
		var demo_title = $(this).find('.views-field-title span a').text();
		if(filterByTitleMatch(demo_title, titles_array)) {
			$(this).addClass('showedTitle');
		} else {
			$(this).removeClass('showedTitle');
		}
	});
}
function filterByTitleMatch(demo_title, titles_array) {
	return stringContainedInStringInArray(demo_title.toLowerCase(),stringArrayToLowerCase(titles_array));
}

// BY TYPE
function filterByType(types_array) {
	
	var demos = $('.view-d-mos .demos-row');
	demos.each(function() {
		var demo_type = $(this).find('.views-field-field-demo-type .field-content').text();
		if(filterByTypeMatch(demo_type, types_array)) {
			$(this).addClass('showedType');
		} else {
			$(this).removeClass('showedType');
		}
	});
}
function filterByTypeMatch(demo_type, types_array) {
	return stringInArray(demo_type.toLowerCase(),stringArrayToLowerCase(types_array));
}

// UTILS
// Equality match
function stringInArray(string, array) {
	return $.inArray(string, array) > -1;
}

// Containing match
function stringContainedInStringInArray(string, array) {
	for (var i = 0; i < array.length; i++) {
	  if(stringContainsString(string, array[i])) {
			return true;
	  }
	}
	return false;
}
function stringContainsString(stringWrap, string) {
	return stringWrap.indexOf(string) >= 0;
}

function stringArrayToLowerCase(array) {
	newArray = Array();
	for (var i = 0; i < array.length; i++) {
	  newArray[i] = array[i].toLowerCase();
	}
	return newArray;
}

function cleanFromEmptyChar(string_array) {
	
	if(string_array.length<2) {
		return string_array;
	}
	
	newArray = Array();
	for (var i = 0; i < string_array.length; i++) {
		if(string_array[i]!="") {
			newArray.push(string_array[i]);
		}
	}
	
	return newArray;
}
})(jQuery);