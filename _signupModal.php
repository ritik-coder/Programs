<!-- Modal -->
<div class="modal fade" id="signupModal" tabindex="-1" role="dialog" aria-labelledby="signupModalLabel"
    aria-hidden="true">
    <div class="modal-dialog" role="document">
        <div class="modal-content">
            <div class="modal-header">
                <h5 class="modal-title" id="signupModalLabel">Signup for an iCanvass Account</h5>
                <button type="button" class="close" data-dismiss="modal" aria-label="Close">
                    <span aria-hidden="true">&times;</span>
                </button>
            </div>
            <form action="/forum/partials/_handleSignup.php" method="post">
                <div class="modal-body">


                    <div class="row">
                        <div class="col">
                            <input type="text" class="form-control" placeholder="First name">
                        </div>
                        <div class="col">
                            <input type="text" class="form-control" placeholder="Last name">
                        </div>
                    </div>

                    <div class="form-group">
                        <label for="exampleInputEmail1">Username</label>
                        <input type="text" class="form-control" id="signupEmail" aria-describedby="emailHelp" name="signupEmail">
                        <!-- <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone
                            else.</small> -->
                    </div>


                    <div class="form-group">
                        <label for="exampleInputEmail1">Email</label>
                        <input type="email" class="form-control" id="username" aria-describedby="emailHelp" name="username">
                        <!-- <small id="emailHelp" class="form-text text-muted">We'll never share your email with anyone
                            else.</small> -->
                    </div> 

                    <div class="form-group">
                        <label for="exampleInputPassword1">Password</label>
                        <input type="password" class="form-control" id="signupPassword" name="signupPassword">
                    </div>

                    <div class="form-group">
                        <label for="exampleInputPassword1">Confirm-Password</label>
                        <input type="password" class="form-control" id="signupCpassword" name="signupCpassword">
                    </div>

                    <div class="form-group form-check">
                        <input type="checkbox" class="form-check-input" id="exampleCheck1">
                        <label class="form-check-label" for="exampleCheck1">Agree to terms and conditions</label>
                    </div>
                    <button type="submit" class="btn btn-success">Signup</button>

                </div>
                <div class="modal-footer">
                    <button type="button" class="btn btn-secondary" data-dismiss="modal">Close</button>

                </div>
            </form>
        </div>
    </div>
</div>