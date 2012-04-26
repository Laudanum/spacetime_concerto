(function ($) {
    $(document).ready(function(){

        modals = 0;
        
//  load all the modals we need
        var preloadModal = function(obj) {
            uri = $(obj).attr("href");
            if ( ! uri )
                return false;
//  should check whether we need another version of this first
//   use modals = new Array() instead
            modals++;
                
//  get the rendered node without the page decoration ( uses page--render.tpl)

            $.post(uri, {'render':true, 'trigger':"modal-trigger-" + modals}, function(data) {
//  we should check if this element has already been appended
//  perhaps use $.clone() for this
                ele = $('body').append(data);
            });

            $(obj).removeClass("add-modal").addClass("modal-trigger").attr("data-target", "modal-trigger-" + modals);
        }
        

//  not currently used
        var launchModal = function(obj) {
            options = {};
            $(this).modal(options);            
        }


//  look for the subscribe button and load a modal for it
        $("#main-menu li a:contains('Subscribe')").each(function(){
            preloadModal(this);
        });
//  look for anything with the add-modal class and load a modal for that too
        $(".add-modal").each(function() {
            preloadModal(this);
        });


//  watch for clicks on the triggers and show the modal
        $(".modal-trigger").live("click", function(e) {
            target = $(this).attr("data-target");
            target = $("[data-trigger=" + target + "]");
            if ( $(target).size() ) {
                e.preventDefault();
//  add the form-inline class to forms
                $(target).find('form').addClass("form form-inline");
                $(target).modal();
            };
        });
        
        
    });
})(jQuery);
